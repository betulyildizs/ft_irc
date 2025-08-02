#include "ft_irc.hpp"

int	ft_isdigit(int y)
{
	return ((y >= '0' && y <= '9'));
}

int	ft_isascii(int y)
{
	return (y >= 0 && y <= 127);
}

int ft_isspace(int y)
{
	return (y == ' ' || y == '\t' || y == '\n' || y == '\v'
			|| y == '\f' || y == '\r');
}

static int	ft_useless(const char *str)
{
	int	j;

	j = 0;
	while ((str[j] <= 13 && str[j] >= 9) || str[j] == 32)
	{
		j++;
	}
	return (j);
}

int	ft_atoi(const char *by)
{
	int					i;
	int					sign;
	unsigned long int	result;

	result = 0;
	sign = 1;
	i = ft_useless(by);
	if (by[i] == '-' || by[i] == '+')
	{
		if (by[i] == '-')
			sign = -1;
		i++;
	}
	while (by[i] <= '9' && by[i] >= '0')
	{
		result = result * 10 + (by[i] - '0');
		i++;
	}
	return (result * sign);
}