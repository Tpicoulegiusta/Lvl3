#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (str[i + 1] > ' ' && str[i + 1] != '\0')
				ft_putchar(' ');
		}
		else if (str[i] != ' ' && str[i] != '\0')
			ft_putchar(str[i]);
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
