#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2)
{
	size_t		i;
	int 	total = 0;

	i = 0;
	while (s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
		{
			total = (s1[i] - s2[i]);
		}
		i++;
	}
	return total;
}

int main()
{
	char *s1 = "whas";
	char *s2 = "what";

	printf("%d", ft_strncmp(s1, s2));

}
