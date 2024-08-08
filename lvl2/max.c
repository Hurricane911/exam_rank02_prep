#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int temp = 0;
	unsigned int i = 0;
	temp = tab[i];
	while(i < len)
	{
		if(temp < tab[i])
		{
			temp = tab[i];
		}
		i++;
	}
	return temp;
}

int main()
{
	int tab[] = {1, 2, 3, 5, 4};
	unsigned int len = 5;

	int test = max(tab, len);

	printf("%d", test);
}
