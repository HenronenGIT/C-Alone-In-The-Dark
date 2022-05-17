#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int	is_whitespace(char ch)
{
	if (ch == ' ' || ch == '\t')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	is_word;
	int	word_count;

	word_count = 0;
	is_word = 0;
	while (*str)
	{
		if (!is_whitespace(*str) && is_word == 0)
		{
			word_count++;
			is_word = 1;
		}
		if (is_whitespace(*str))
			is_word = 0;
		str++;
	}
	return (word_count);
}

int	wordlen(char *str)
{
	int i;

	i = 0;
	while (!is_whitespace(str[i]) && str[i] != '\0')
		i++;
	return(i);
}

char **ft_split(char *str)
{
	char **tab;
	int i;
	int	j;
	int	word_count;
	int word_len;

	j = 0;
	word_len = 0;
	i = 0;
	word_count = count_words(str);
	tab = (char **)malloc(sizeof(char *) * word_count + 1);
	tab[word_count] = NULL;
	word_count = 0;
	while(str[i])
	{
		if (!is_whitespace(str[i]))
		{
			word_len = wordlen(&str[i]);
			tab[word_count] = (char *)malloc(sizeof(char) * (word_len + 1));
			tab[word_count][word_len] = '\0';
			while (!is_whitespace(str[i]) && str[i])
				tab[word_count][j++] = str[i++];
			word_count++;
		}
		if (str[i] == '\0')
			break;
		j = 0;
		i++;
	}
	return (tab);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	char **tab;
	int	i;

	i = 0;
	if (argc > 1)
	{
		tab = ft_split(argv[1]);
		while (tab[i])
			i++;
		if (i == 1)
			ft_putstr(tab[0]);
		else
		{
			i = 0;
			while (tab[++i])
			{
				ft_putstr(tab[i]);
				write(1, " ", 1);
			}
			ft_putstr(tab[0]);
		}
	}
	write(1, "\n", 1);
}