#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9 && nbr <= 238609183)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int	ft_atoi (char *str)
{
	int	result;

	result = 0;
	while (*str < 33 || *str > 126)
		str++;
	while ((*str >= 48 && *str <= 57) && *str)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result);
}

void ft_putstr (char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr (int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}
void	ft_tab_mult(char *str)
{
	int		i;
	int		result;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putstr(str);
		ft_putstr(" = ");
		result = (ft_atoi(str) * i);
		ft_putnbr(result);
		ft_putchar('\n');
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		ft_tab_mult(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
