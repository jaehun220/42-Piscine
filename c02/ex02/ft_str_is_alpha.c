/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:49:59 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/25 18:49:59 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "abcdefg";
	char str2[] = "abc1";
	char str3[] = "abg;";
	printf("%d\n%d\n%d\n", ft_str_is_alpha(str1),
	ft_str_is_alpha(str2),ft_str_is_alpha(str3));
	return 0;
}*/