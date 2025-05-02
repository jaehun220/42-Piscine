/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:23:07 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/10 17:23:07 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(ret[i].str);
		i++;
	}
	ret[i].size = 0;
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}

/* #include <stdio.h>
#include "ft_stock_str.h"

int main(int argc, char **argv) {
    struct s_stock_str *result;
    int i;

    // ft_strs_to_tab 함수를 호출
    result = ft_strs_to_tab(argc - 1, &argv[1]);

    // 결과 출력
    for (i = 0; i < argc - 1; i++) {
        printf("String %d:\n", i + 1);
        printf("  Size: %d\n", result[i].size);
        printf("  Original: %s\n", result[i].str);
        printf("  Copy: %s\n", result[i].copy);
    }

    // 마지막 요소 출력
    printf("String %d:\n", i + 1);
    printf("  Size: %d\n", result[i].size);
    printf("  Original: %s\n", result[i].str);
    printf("  Copy: %s\n", result[i].copy);

    // 메모리 해제
    for (i = 0; i < argc - 1; i++) {
        free(result[i].copy); // 복사된 문자열 메모리 해제
    }
    free(result); // 구조체 배열 메모리 해제

    return 0;
}
 */