#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int	is_whitespace(char ch)
{
	if (ch == ' ' || ch == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char *first_word;
	char *last_word;
	char *ptr_first;
	char *str;
	int	i;

	i = 0;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	
	str = argv[1];

	/* first word */
	while (is_whitespace(str[i]))
		i++;
	ptr_first = &str[i];
	
	printf("%s\n", ptr_first);
}