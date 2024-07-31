#include <unistd.h>
#include <stdlib.h>


int *ft_range(int start, int end)
{
	int i = 0;
	int space = abs((end - start));
	int *result = (int *)malloc(sizeof(int) * space);

	while(start < end)
	{
		if(start < end)
		{
			result[i] = start;
			start++;
			i++;
		}
		else
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	return result;
}

int main(int argc, char **argv)
{
	int i = 0;
	int result;
	if(argc == 3)
	{
		while(argv[1][i] && argv[2][i])
		{
			result = atoi(ft_range(argv[1][i], argv[2][i]));
			i++;
		}
		printf("%s", result);
		free(result);
	}
	return 0;
}
