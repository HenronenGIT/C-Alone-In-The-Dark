#include <stdlib.h>

int	ft_size(nbr)
{
	int size;

	if (nbr == 0)
		return (1);
	size = 0;
	if (nbr < 0)
		size++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	int	remain;
	char *str;
	int len;

	remain = 0;
	len = ft_size(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	else if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		remain = nbr % 10;
		str[--len] = (remain + 48);
		nbr = nbr / 10;
	}	
	return (str);
}
