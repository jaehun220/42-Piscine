/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:55:37 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/05 13:55:37 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}	
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	int a = 23;
	printf("%d\n",ft_is_prime(a));
	return 0;
}*/