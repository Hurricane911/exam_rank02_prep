#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

	while(s[i])
	{
		j=0;
		while(reject[j])
		{
			if(reject[j] == s[i])
				return i;
			j++;
		}
		i++;
	}
	return i;
}

int main()
{
	char *s1 = "what";
	char *s2 = "cdefgi";

	int result = ft_strcspn(s1, s2);
	printf("%d",result);
}
