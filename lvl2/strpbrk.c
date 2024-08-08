#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{

	int j = 0;
	int i = 0;

	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return (char *)&s1[i];
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char *src1 = "whatqhrbgoqiuvrqeibuv";
	char *src2 = "bc";

	char* result = ft_strpbrk(src1, src2);
	printf("%s",result);
}
