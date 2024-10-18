#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// For lowercase letters
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + 13 > 'z')
				str[i] = str[i] - 13;
			else
				str[i] = str[i] + 13;
		}
		// For uppercase letters
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] + 13 > 'Z')
				str[i] = str[i] - 13;
			else
				str[i] = str[i] + 13;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
