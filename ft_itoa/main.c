#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int nbr);

int main(void)
{
	/*
	printf("%s\n",ft_itoa(21));
	printf("%s\n",ft_itoa(1));
	printf("%s\n",ft_itoa(100));
	printf("%s\n",ft_itoa(1234));
	printf("%s\n",ft_itoa(0));
	*/
	printf("%s\n",ft_itoa(-5));
	printf("%s\n",ft_itoa(-100));
	printf("%s\n",ft_itoa(-0));
	printf("%s\n",ft_itoa(+0));
	printf("%s\n",ft_itoa(-12312421));
	printf("%s\n",ft_itoa(INT_MAX));
	printf("%s\n",ft_itoa(INT_MIN));
}

