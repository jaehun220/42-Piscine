/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:28:01 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/24 21:28:01 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

#ifdef TEST
int main(int argc, char const *argv[])
{
	int	*tab;

	tab = 10;
	ft_sort_int_tab(tab, 10);
	return 0;
}
#endif
