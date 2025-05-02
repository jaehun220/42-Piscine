/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:28:06 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/08 15:28:06 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *c1, char *c2)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(c1);
	while (c2[i])
	{
		c1[len + i] = c2[i];
		i++;
	}
	c1[len + i] = '\0';
	return (c1);
}

int	malloc_size_cal(int size, char **strs, char *sep)
{
	int	strs_len;
	int	sep_len;
	int	i;

	strs_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	if (size == 1)
		return (ft_strlen(strs[0]) + 1);
	while (i < size - 1)
	{
		strs_len += ft_strlen(strs[i]);
		strs_len += sep_len;
		++i;
	}
	strs_len += ft_strlen(strs[i]);
	return (strs_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = 0;
		return (str);
	}
	total_length = malloc_size_cal(size, strs, sep);
	str = (char *)malloc(total_length * sizeof(char));
	if (str[0] != 0)
		str[0] = 0;
	i = 0;
	while (i < (size -1))
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
		++i;
	}
	str = ft_strcat(str, strs[i]);
	return (str);
}

/* #include <stdio.h>
int main(void)
{
    char *strings[] = {"Hello", "world", "this", "is", "C"};
    char *separator = ", ";
    char *result;

    result = ft_strjoin(5, strings, separator);
    if (result)
    {
        printf("Result: %s\n", result); // 결과 출력
        free(result); // 메모리 해제
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */