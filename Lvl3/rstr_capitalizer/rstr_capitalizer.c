#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i + 1] == ' '
					|| str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;
	
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
return (0);
}


