#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strrev(char *str)
{
    int len = strlen(str);
    char *rev_string = (char *)malloc(len + 1); // Allocate memory for the reversed string
    if (!rev_string) {
        return NULL; // Handle memory allocation failure
    }
    
    int i;
    for (i = 0; i < len; i++) {
        rev_string[i] = str[len - i - 1]; // Copy characters in reverse order
    }
    rev_string[len] = '\0'; // Null-terminate the reversed string
    
    return rev_string;
}

int main()
{
    char str[] = "what"; // Correct length for the string
    char *reversed_str = ft_strrev(str);

    if (reversed_str) {
        printf("%s\n", reversed_str);
        free(reversed_str); // Free the allocated memory
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
