
// int is_valid_base(const char *base, int *n)
// {
// 	int j;

// 	*n = 0;
// 	while (base[*n])
// 	{
// 		if (base[*n] == '+' || base[*n] == '-' || base[*n] == ' ' || base[*n] == '\t'
// 			|| base[*n] == '\n' || base[*n] == '\v' || base[*n] == '\f' || base[*n] == '\r')
// 			return (0);
// 		j = 0;
// 		while (j < *n)
// 		{
// 			if (base[*n] == base[j])
// 				return (0);
// 			++j;
// 		}
// 		++(*n);
// 	}
// 	if (*n < 2)
// 		return (0);
// 	return (1);
// }

// int is_in_base(const char c, const char *base, int n)
// {
// 	int i = 0;
// 	while (base[i])
// 	{
// 		if (base[i] == c)
// 			return i;
// 	}
// 	return -1;
// }

// int ft_atoi_base(char *str, char *base)
// {
// 	int nb;
// 	int sign;
// 	int n;
// 	int pos;

// 	if (!str || !is_valid_base(base, &n))
// 		return (0);
// 	while (*str == ' ' || *str == '\t' || *str == '\n'
// 			|| *str == '\v' || *str == '\f' || *str == '\r')
// 		++str;

// 	sign = 1;
// 	while (str == '+' || str == '-')
// 	{
// 		if (*str == '-')
// 			sign *= -1;
// 		++str;
// 	}

// 	while ( (pos = is_in_base(*str, base, n)) != -1)
// 		nb = nb * n + pos;
// 	return (nb * sign);
// }
