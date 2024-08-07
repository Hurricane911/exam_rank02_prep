#include <unistd.h>
#include <stdio.h>


int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;

	while(str[i])
	{
		if((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		else if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				sign *= -1;
			i++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		printf("%d", num);
	}
	
}
