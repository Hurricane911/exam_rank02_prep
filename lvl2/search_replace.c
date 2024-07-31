#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][i])
		{
			if (argv[2][0] == argv[1][i])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		printf("%d", num);
	}
	
}
