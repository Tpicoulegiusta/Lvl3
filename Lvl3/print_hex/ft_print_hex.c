#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}


int ft_small_atoi(char *str)
{
	int	i;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}


void	ft_print_hex(int nbr)
{
	if (nbr >= 16)
		ft_print_hex(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
}


int main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_small_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
