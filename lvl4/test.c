#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	char *first_word_start;
	char *first_word_end;

	if (argv > 1)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t')
			str++;
		first_word_start = str;
		while (*str && *str != ' ' && *str != '\t')
			str++;
		first_word_end = str;
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str)
		{
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while (*str == ' ')
				}
			}
		}
	}
}
