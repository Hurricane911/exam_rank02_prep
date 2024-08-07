#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int count = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			i++;
			count++;
		}
		while(count)
		{
			count--;
			i--;
			write(1, &argv[1][i], 1);
		}
	}
}
