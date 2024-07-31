#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(int argc, char **argv)
{
	char *buf;
	if (argc == 2)
	{
		buf = (char *)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		if (!buf)
			return 1; // Exit if memory allocation fails
		ft_strcpy(buf, argv[1]);
		write(1, buf, strlen(buf));
		free(buf); // Free the allocated memory
	}
	return 0;
}
