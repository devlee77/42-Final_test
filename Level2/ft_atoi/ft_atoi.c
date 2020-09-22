int ft_atoi(const char *str)
{
	int i;
	int minus;
	int answer;
	
	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	minus = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	answer = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		answer = answer * 10 + (str[i] - '0');
		i++;
	}
	return (minus * answer);
}