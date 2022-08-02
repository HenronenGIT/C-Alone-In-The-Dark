#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
void	rev_wstr(char *str)
{
	int	i;
	char *ptr_start;

	i = 0;
		//printf("%p\n", str);
		//str++;
		//printf("%p\n", str);
		//str--;
		//printf("%p\n", str);
	/* Find end of the string */
	//while (str[i + 1] == '\0')
		i++;
	while (!ft_iswhitespace(str[i - 1]))
		i--;

}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
}