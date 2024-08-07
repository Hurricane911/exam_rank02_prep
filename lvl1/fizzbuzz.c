#include <unistd.h>

int put_num(int n)
{
	char *base= "0123456789";
	if(n> 9)
		put_num(n /10);
	write(1, &base[n % 10], 1);
	return n;
}

int main()
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 5 == 0)
			write(1, "fizz", 4);
		else if(i % 3 == 0)
			write(1, "buzz", 4);
		else
			put_num(i);
		i++;
		write(1, "\n", 1);
	}
}
