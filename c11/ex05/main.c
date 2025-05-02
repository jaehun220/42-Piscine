/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:08:30 by jaehlee           #+#    #+#             */
/*   Updated: 2025/02/12 18:15:59 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

char	is_op(char *op)
{
	int	i;

	i = 0;
	if (op == 0 || op[0] == '\0')
		return ('\0');
	while (op[i])
	{
		if (op[i] != '+' && op[i] != '-'
			&& op[i] != '/' && op[i] != '%' && op[i] != '*')
			return ('\0');
		i++;
	}
	return (op[0]);
}

int	do_op(int *num1, char *op, int *num2)
{
	int		result;
	char	opperator;

	if (is_op(op) == '\0')
		return (0);
	opperator = is_op(op);
	if (op == '+')
		result = *num1 + *num2;
	else if (op == '-')
		result = *num1 - *num2;
	else if (op == '*')
		result = *num1 * *num2;
	else if (op == '/')
	{
		if (num2 != 0)
			result = *num1 / *num2;
		else
		{
			ft_putstr("Stop : division by zero");
			return (0);
		}
	}
	else if (op == '%')
	{
		if (num2 != 0)
			result = *num1 % *num2;
		else
		{
			ft_putstr("Stop : division by zero");
			return (0);
		}
	}
	return (result);
}

int	main(int argc, char **argv[])
{
	if (argc < 4)
		return (0);
	ft_putnbr(do_op(ft_atoi(argv[1]), argv[2],ft_atoi(argv[3])));

	return (0);
}
