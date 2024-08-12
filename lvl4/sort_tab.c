#include <unistd.h>
#include <stdio.h>


void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int temp = 0;

	while(i < (size -1))
	{
		if(tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i +1];
			tab[i + 1] = temp;
			i = 0;
		}
		else 
			i++;
	}

}

int main()
{
	int num[] = {3,4,1,2,5};
	unsigned int size = 5;
	unsigned int i  = 0;

	sort_int_tab(num, size);
	while(i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
}
