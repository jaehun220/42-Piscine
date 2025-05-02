/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:13:17 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/25 18:39:02 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *arr, int n, int index, int start)
{
	int	i;

	i = start;
	while (i < 10)
	{
		arr[index] = i;
		print(arr, n, index + 1, i + 1);
		i++;
	}
	if (n == index)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		if (arr[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}	
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	print(arr, n, 0, 0);
}
