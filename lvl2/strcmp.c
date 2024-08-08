#include <unistd.h>
#include <stdio.h>
int    ft_strcmp(char *s1, char *s2)
{
	int i =0;
	int j = 0;
	int result = 0;
	while(s1[i] && s2[j])
	{
		if(s1[i] != s2[j])
			result = s1[i] - s2[j];
		
		i++;
		j++;
	}
	return result;
}

int main()
{
	char *s1 = "what";
	char *s2 = "whau";

	int result = ft_strcmp(s1, s2);
	printf("%d",result);
}
