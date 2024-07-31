#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		int count = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 'a' + 1;
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i] - 'A' + 1;
			else
				count = 1;

			while(count)
			{
				write(1, &argv[1][i], 1);
				count --;
			}
			i++;
		}
	}
	return 0;
}
