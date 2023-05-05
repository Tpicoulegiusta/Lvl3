#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

void ft_hidenp(char *first, char *second)
{
	int	i_first;
	int	i_second;

	i_first = 0;
	i_second = 0;
	while (second[i_second] != '\0')
	{
		if (first[i_first] == second[i_second])
			i_first++;
		i_second++;
	}
	if (i_first == ft_strlen(first))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidenp(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
