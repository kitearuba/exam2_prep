char	*rev_print(char *str)
{
	int	len;

	// Find the length of the string
	len = 0;
	while (str[len])
		len++;

	// Print characters in reverse order
	while (len > 0)
	{
		len--;
		write(1, &str[len], 1);
	}
	return (str);
}

int	main(void)
{
	rev_print("Hello world");
	write(1, "\n", 1);
	rev_print("tnirp esreveR");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}
