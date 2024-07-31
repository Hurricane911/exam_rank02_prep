#include <unistd.h>
#include <stdio.h>


int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
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
