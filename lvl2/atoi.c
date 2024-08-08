#include <unistd.h>
#include <stdio.h>


int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	
		while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if(str[i] == '-')
			sign = -1;
		if(str[i] == '-' || str[i] == '+')
			i++;
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	return (sign * result);
}

int main(int argc, char **argv)
{
	
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		printf("%d", num);
	}
	
}
