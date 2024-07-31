char *ft_itoa(int n)
{
	unsigned int absolute;
	int	sign;
	int len;
	char *string;

	if (n < 0)
		sign = 1;
	
	len = absolute_len(n);
	string = array(len);

	if(!string)
		return (NULL);
	string[len] = '\0';
	absolute = abs_val(n);
	while (len--)
	{
		string[len] = 48 + absolute % 10;
		absolute /= 10;
	}
	if (sign)
		string[0] = '-';
	return (string);
}
