#include <stdlib.h>
#include <stdio.h>

int	is_whitespace(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n')
		return (1);
	else
		return (0);
}

int word_len(char *word_pos)
{
	int	len;

	len = 0;
	while (!is_whitespace(*word_pos))
	{
		len++;
		word_pos++;
	}
	return (len);
}

int	count_words(const char *str)
{
	int is_word;
	int	word_count;

	word_count = 0;
	is_word = 0;
	while (*str)
	{
		if (!is_whitespace(*str) && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		if (is_whitespace(*str) && is_word == 1)
			is_word = 0;
		str++;
	}
	return (word_count);
}

char	**ft_split(char *str)
{
	char	**word_arr;
	int		word_count;
	int		i;
	int		j;
	int		len;

	len = 0;
	i = 0;
	j = 0;
	word_count = count_words(str);
	word_arr = (char**)malloc(sizeof(char*) * (word_count + 1));
	while (*str)
	{
		if (!is_whitespace(*str))
		{
			len = word_len(str);
			word_arr[i] = (char *)malloc(sizeof(char) * (len + 1));
			word_arr[i][len] = '\0';
			while (j < len)
			{
				word_arr[i][j] = *str;
				str++;
				j++;
			}
			j = 0;
			i++;
		}
		str++;
	}
	word_arr[i] = NULL;
	return (word_arr);
}
