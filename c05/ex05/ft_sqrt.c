/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:13:53 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/05 13:13:53 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b < 0)
		return (0);
	if (b == 1)
		return (1);
	index = 2;
	if (b >= 2)
	{		
		while (index * index <= b)
		{
			if (index * index == b)
				return (index);
			index++;
		}
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	int a = 36;
	printf("%d\n",ft_sqrt(a));
	return 0;
}*/