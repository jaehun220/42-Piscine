/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:50:15 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/08 21:50:15 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], sep) && !is_sep(str[i + 1], sep))
			count++;
		i++;
	}
	if (i > 0 && !is_sep(str[i - 1], sep))
		count++;
	return (count);
}

char	*make_str(char *str, char *sep)
{
	int		str_len;
	int		i;
	char	*new_str;

	str_len = 0;
	while (str[str_len] && !is_sep(str[str_len], sep))
		str_len++;
	new_str = (char *)malloc(str_len * sizeof(char) + 1);
	if (new_str == 0)
		return (0);
	i = 0;
	while (i < str_len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		arr_i;
	int		i;
	int		word_num;

	word_num = count_words(str, charset);
	result = (char **)malloc((word_num + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	arr_i = i;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			result[arr_i] = make_str(&str[i], charset);
			arr_i++;
		}
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	result[arr_i] = 0;
	return (result);
}

/*  #include <stdio.h>
int main(void){
	char *str = "Hello, world! This is a test.";
    char *charset = " ,.!"; // 구분자 설정
    char **result = ft_split(str, charset);
    
    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]); // 메모리 해제
        }
        free(result); // 결과 배열 메모리 해제
    } else {
        printf("Memory allocation failed.\n");
    }
	return 0;
}  */