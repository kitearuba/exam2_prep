#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;

	while (i)
	{
		i--;
		if (octet & (1 << i))  // This checks if the i-th bit is 1
            write(1, "1", 1);  // If it's 1, print '1'
        else
            write(1, "0", 1);  // If it's 0, print '0'
    }
}
