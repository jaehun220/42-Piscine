/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:13:55 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/04 14:13:55 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{		
		j = i + 1;
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-'
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}			
		i++;
	}
	return (i);
}

int	make_sign(char *str, int *index)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	get_value_from_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	baselen;
	int	value;

	i = 0;
	result = 0;
	sign = 1;
	baselen = valid_base(base);
	if (baselen < 2)
		return (0);
	sign = make_sign(str, &i);
	value = get_value_from_base(str[i], base);
	while (value != -1)
	{
		result = result * baselen + value;
		i++;
		value = get_value_from_base(str[i], base);
	}
	return (result * sign);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi_base("   ---1A", "0123456789ABCDEF")); 
	printf("%d\n", ft_atoi_base("  1010", "01"));
	printf("%d\n", ft_atoi_base("  -12", "01234567"));
	printf("%d\n", ft_atoi_base("Z", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("%d\n", ft_atoi_base("7F", "0123456789ABCDEF"));
	return 0;
}*/