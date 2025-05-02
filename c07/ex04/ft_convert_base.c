/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:06:04 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/08 17:06:04 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		valid_base(char *str);
int		make_sign(char *str, int *index);

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

void	ft_putnbr_base(int nbr, char *base, char *str)
{
	long	n;
	int		len;

	if (!valid_base(base))
		return ;
	len = valid_base(base);
	n = (long)nbr;
	if (n < 0)
	{
		ft_strcat(str, "-");
		n = -n;
	}
	if (n >= len)
	{
		ft_putnbr_base(n / len, base, str);
		ft_putnbr_base(n % len, base, str);
	}
	else
		ft_strncat(str, &base[n], 1);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		decimal;
	int		temp;
	int		base_to_length;
	int		count;

	base_to_length = valid_base(base_to);
	if ((base_to_length < 2) || (valid_base(base_from) == 0))
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	temp = decimal;
	count = 1;
	if (decimal == 0)
		count = 1;
	while (temp != 0)
	{
		temp /= base_to_length;
		count++;
	}
	result = (char *)malloc((count + 1) * sizeof(char));
	if (result == NULL)
		return (0);
	result[0] = 0;
	ft_putnbr_base(decimal, base_to, result);
	return (result);
}

/* #include <stdio.h>

int main(void)
{
    char *base_from = "0123456789"; // 10진수
    char *base_to = "01";           // 2진수
    char *nbr = "42";

    char *result = ft_convert_base(nbr, base_from, base_to);
    printf("Decimal %s to binary: %s\n", nbr, result);
    free(result);

    nbr = "101010"; // 2진수
    base_from = "01"; // 2진수
    base_to = "0123456789"; // 10진수

    result = ft_convert_base(nbr, base_from, base_to);
    printf("Binary %s to decimal: %s\n", nbr, result);
    free(result);

    nbr = "2A"; // 16진수
    base_from = "0123456789ABCDEF"; // 16진수
    base_to = "0123456789"; // 10진수

    result = ft_convert_base(nbr, base_from, base_to);
    printf("Hexadecimal %s to decimal: %s\n", nbr, result);
    free(result);

	nbr = "2A"; // 16진수
    base_from = "--01234"; // invalid test case
    base_to = "0123456789"; // 10진수

    result = ft_convert_base(nbr, base_from, base_to);
    printf("invalid %s to decimal: %s\n", nbr, result);
    free(result);

    return 0;
}  */