#include <stdio.h>
#include <unistd.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int max;
	int temp;

	temp = 0;
	max = 0;
	i = 0;
	// 5, 2, 3, 4, 2
	// 2, 5, 3, 4, 2
	// 2, 3, 5, 4, 2

	while (i <= size)	
	{
		if (tab[i] > max)
		{
			max = tab[i];
			i = 0;
		}
		else
		{
			temp = tab[i];
			tab[i] = max;
			
		}

		i++;
	}
}

int main(void)
{
	int i;
	i = 0;

	int tab[5] = {5, 2, 3, 4, 2};
	
	while (i <= 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	sort_int_tab(tab, 5);
	i = 0;
	while (i <= 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}
