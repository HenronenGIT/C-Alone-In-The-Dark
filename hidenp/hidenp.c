#include <unistd.h>

void	ft_putnl(char nb)
{

	write(1, &nb, 1);
	write(1, "\n", 1);
}

int	main (int argc, char **argv)
{
	char *s1;
	char *s2;

	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (*s2 != '\0')
	{
		if (*s1 == *s2)
			s1++;
		s2++;	
	}
	if (*s1 == '\0')
		ft_putnl('1');
	else
		ft_putnl('0');
	return (0);
}
