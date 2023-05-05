#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(const	char *str, int str_base)
{
	int i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - '7';
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 'W';
		i++;
	}
	return (result * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("0123", atoi("2")));
	printf("%d\n", ft_atoi_base("16", atoi("8")));
	printf("%d\n", ft_atoi_base("123", atoi("10")));
	printf("%d\n", ft_atoi_base("FF", atoi("16")));
}
