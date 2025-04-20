int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (*str == '\t' || *str == '\v' || *str == '\f'
		|| *str == '\n' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (sign % 2 == 1)
		return (-num);
	return (num);
}
