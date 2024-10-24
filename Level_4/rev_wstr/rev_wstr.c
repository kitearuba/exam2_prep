#include <unistd.h>

void	rev_wstr(char *s)
{
	int end;

	end = 0;
	// Move to the end of the string
	while (s[end])
		end++;
	end--;

	// Start from the end of the string and find words
	while (end >= 0)
	{
		// Skip trailing spaces and tabs
		while (end >= 0 && (s[end] == ' ' || s[end] == '\t'))
			end--;

		// Mark the end of the word
		int word_end = end;

		// Find the start of the word
		while (end >= 0 && s[end] != ' ' && s[end] != '\t')
			end--;

		// Print the word
		write(1, &s[end + 1], word_end - end);
		
		// Print a space after the word if there's more to come
		if (end > 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);  // Always print a newline at the end
	return (0);
}
