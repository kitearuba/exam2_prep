#include <unistd.h>

void	last_word(char *str)
{
	int	i;
	int	end;
	int	start;

	i = 0;
	// Find the end of the string
	while (str[i])
		i++;
	// Move backwards to find the last word
	while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		i--;
	end = i;
	// Move backwards to find the start of the last word
	while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
		i--;
	start = i;
	// Print the last word
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
