/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:16:06 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/05 16:16:06 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	*range = (int *)malloc(len * sizeof(int));
	if (!range)
	{
		*range = 0;
		return (0);
	}
	while (i < len)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (len);
}

/* #include <stdio.h>
int main(void) {
    int *range;
	int i;
    i = ft_ultimate_range(&range,1, 10);
    printf("%d\n ", i);

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