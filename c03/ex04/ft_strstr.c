/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:58:13 by jaehlee           #+#    #+#             */
/*   Updated: 2025/01/30 21:24:48 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}	
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
    char *str1 = "Hello, world!";
    char *to_find1 = "world";
    char *to_find2 = "Hello";
    char *to_find3 = "notfound";
    char *to_find4 = ""; // 빈 문자열
    char *to_find5 = "Hello, world!";

    printf("Result 1: %s\n", ft_strstr(str1, to_find1)); // "world!"
    printf("Result 2: %s\n", ft_strstr(str1, to_find2)); // "Hello, world!"
    printf("Result 3: %s\n", ft_strstr(str1, to_find3)); // (null)
    printf("Result 4: %s\n", ft_strstr(str1, to_find4)); // "Hello, world!"
    printf("Result 5: %s\n", ft_strstr(str1, to_find5)); // "Hello, world!"

    return 0;
}*/