#include <stdio.h>

size_t ft_strspn(const char *str1, const char *str2)
{
	size_t len = 0;

	while(*str1)
	{
		while(*str2)
		{
			if(*str1 == *str2)
				break;
			str2++;
		}
		if(*str2 == '\0')
			break;

		str1++;
		len++;
	}
	return len;
}

// Function prototype
size_t my_strspn(const char *str1, const char *str2);

int main() {
    // Test cases
    const char *test1_str1 = "whtt";
    const char *test1_str2 = "wht";
    
    const char *test2_str1 = "12345";
    const char *test2_str2 = "123";
    
    const char *test3_str1 = "abcde";
    const char *test3_str2 = "abcd";
    
    const char *test4_str1 = "abcdef";
    const char *test4_str2 = "xyz";

    // Call my_strspn and print the results for each test case
    printf("Test 1: str1 = \"%s\", str2 = \"%s\"\n", test1_str1, test1_str2);
    printf("Initial segment length: %zu\n", ft_strspn(test1_str1, test1_str2));
    
    printf("Test 2: str1 = \"%s\", str2 = \"%s\"\n", test2_str1, test2_str2);
    printf("Initial segment length: %zu\n", ft_strspn(test2_str1, test2_str2));
    
    printf("Test 3: str1 = \"%s\", str2 = \"%s\"\n", test3_str1, test3_str2);
    printf("Initial segment length: %zu\n", ft_strspn(test3_str1, test3_str2));
    
    printf("Test 4: str1 = \"%s\", str2 = \"%s\"\n", test4_str1, test4_str2);
    printf("Initial segment length: %zu\n", ft_strspn(test4_str1, test4_str2));
    
    return 0;
}
