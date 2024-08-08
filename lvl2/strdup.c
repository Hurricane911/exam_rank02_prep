#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	while(src[i])
	{
		len++;
		i++;
	}
	char *string = malloc(sizeof(char) * (len + 1));
	if(!string)
		return NULL;
	i = 0;
	while(src[i])
	{
		string[i] = src[i];
		i++;
	}
	string[len + 1] = '\0';
	return string;
}

int main()
{
	char *src = "whatqhrbgoqiuvrqeibuv";

	char* result = ft_strdup(src);
	printf("%s",result);
}
