/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:49:08 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/05 12:49:27 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("%d\n", ft_fibonacci(1)); // 1 출력
    printf("%d\n", ft_fibonacci(2)); // 1 출력
    printf("%d\n", ft_fibonacci(3)); // 2 출력
    printf("%d\n", ft_fibonacci(4)); // 3 출력
    printf("%d\n", ft_fibonacci(5)); // 5 출력
    printf("%d\n", ft_fibonacci(10)); // 55 출력	
	return 0;
}*/