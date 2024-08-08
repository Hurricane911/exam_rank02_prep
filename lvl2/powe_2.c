#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	if(n == '0')
		return 0;
	
	while(n % 2 == 0)
	{
		n = n /2;
	}
	return 1;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int num  = (unsigned int) atoi (argv[1]);
		int result = is_power_of_2(num);
		printf("%d", result);
	}
}
