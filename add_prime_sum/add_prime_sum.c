#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int nb;

	nb = 0;
	while (*str)
	{
		nb = (nb * 10) + *str - 48;
		str++;
	}
	return (nb);
}

int	ft_isprime(int nb)
{
	int divider;

	divider = nb - 1;
	while (divider != 1)
	{
		if (nb % divider != 0)
			divider--;
		else
			return(0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && *argv[1] != '-')
	{
		int nb;
		int sum;

		sum = 0;
		nb = ft_atoi(argv[1]);
		while (nb != 1)
		{
			if (ft_isprime(nb))
				sum = sum + nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
}