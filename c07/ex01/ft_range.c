/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:36:25 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/05 15:36:25 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*result;

	range = max - min;
	if (min >= max)
		return (0);
	i = 0;
	result = (int *)malloc(range * sizeof(int));
	if (!result)
		return (0);
	while (i < range)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

/* #include <stdio.h>
int main(void) {
    int *range;
    range = ft_range(1, 10);

    if (range != NULL) {
        for (int i = 0; i < 9; i++) { 
            printf("%d ", range[i]);
        }
        printf("\n");
        
        free(range);
    } else {
        printf("Range is NULL.\n");
    }

    return 0;
} */