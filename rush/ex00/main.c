/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:09:15 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/25 17:03:42 by joan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;
	int	int_x;
	int	int_y;
	
	x = 56;
	y = 56;

	if (isdigit(x) && isdigit(y))
	{
		int_x = x - '0';
		int_y = y - '0';
		if (int_x > 0 && int_y > 0)
		{
			rush(int_x, int_y);
		}
		else
		{
			write(1, "Invalid input\n", 15);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
