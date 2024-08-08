#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strrev(char *str)
{
	int j = 0;
	while(str[j])
	{
		j++;
	}
    char *rev_string = (char *)malloc(sizeof(char) * j + 1);
    if (!rev_string) {
        return NULL; 
    }

	int i = 0;
	while(j)
	{
		j --;
		rev_string[i] = str[j];
		i++;
	}
	rev_string[i] = '\0';
	return rev_string;
    
}

int main() {
    // Test case
    char str1[] = "Hello, world!";
    char str2[] = "abcdef";
    char str3[] = "12345";

    // Call ft_strrev and print the results
    printf("Original: %s, Reversed: %s\n", str1, ft_strrev(str1));
    printf("Original: %s, Reversed: %s\n", str2, ft_strrev(str2));
    printf("Original: %s, Reversed: %s\n", str3, ft_strrev(str3));

    return 0;
}
