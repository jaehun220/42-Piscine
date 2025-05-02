/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:52:08 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/30 15:52:08 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
    printf("%d\n", ft_strcmp("abc", "abc"));  
    printf("%d\n", ft_strcmp("abc", "abd"));  
    printf("%d\n", ft_strcmp("abc", "abcd")); 
    printf("%d\n", ft_strcmp("abcd", "abc")); 
    return 0;
}*/