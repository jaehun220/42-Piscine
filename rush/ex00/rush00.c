/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:42:37 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/25 17:04:11 by joan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(char start, char middle, char end, int length)
{
	int		x_index;

	x_index = 0;
	if (length < 1 || length > 2147483647)
	{
		return ;
	}
	if (length == 1)
	{
		ft_putchar(start);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(start);
		while (x_index < length - 2)
		{
			ft_putchar(middle);
			x_index++;
		}
		ft_putchar(end);
		ft_putchar('\n');
	}	
}

void	rush(int x, int y)
{
	int	y_index;

	y_index = 0;
	if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
	{
		return ;
	}
	while (y_index < y)
	{
		if (y_index == 0 || y_index == y - 1)
		{
			ft_line('o', '-', 'o', x);
		}		
		else
		{
			ft_line('|', ' ', '|', x);
		}
		y_index++;
	}
}
