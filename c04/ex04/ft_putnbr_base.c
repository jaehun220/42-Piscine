/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:12:36 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/04 14:12:36 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid_test(char *str)
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
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;

	if (!valid_test(base))
		return ;
	len = ft_strlen(base);
	n = (long)nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	ft_putchar(base[n % len]);
}

/*#include <stdio.h>
int main(void)
{
	printf("Test 1 (Binary 1010): ");
	fflush(stdout);  // 즉시 출력
	ft_putnbr_base(10, "01");
	printf("\n");

	printf("Test 2 (Octal 12): ");
	fflush(stdout);
	ft_putnbr_base(10, "01234567");
	printf("\n");

	printf("Test 3 (Hexadecimal a): ");
	fflush(stdout);
	ft_putnbr_base(10, "0123456789abcdef");
	printf("\n");

	printf("Test 4 (Hexadecimal A): ");
	fflush(stdout);
	ft_putnbr_base(10, "0123456789ABCDEF");
	printf("\n");

	printf("Test 5 (Binary -101010): ");
	fflush(stdout);
	ft_putnbr_base(-42, "01");
	printf("\n");

	printf("Test 6 (Base 5 1234): ");
	fflush(stdout);
	ft_putnbr_base(194, "01234");
	printf("\n");

	printf("Test 7 (INT_MIN in Decimal): ");
	fflush(stdout);
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");

	printf("Test 8 (Invalid Base - Duplicate '1'): ");
	fflush(stdout);
	ft_putnbr_base(10, "011");
	printf("\n");

	printf("Test 9 (Invalid Base - Empty): ");
	fflush(stdout);
	ft_putnbr_base(10, "");
	printf("\n");

	printf("Test 10 (Invalid Base - Single Character '0'): ");
	fflush(stdout);
	ft_putnbr_base(10, "0");
	printf("\n");

	return (0);
}*/