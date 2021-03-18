/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:32:27 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/19 02:14:36 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.h"

int		is_valid_operator(char op)
{
	return (op == '+' || op == '-' || op == '*' || op == '/' || op == '%');
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		excute(int val1, int val2, int (*fp)(int, int))
{
	return (fp(val1, val2));
}

int		(*what_oper(char op))(int, int)
{
	if (op == '+')
		return (sum);
	if (op == '-')
		return (sub);
	if (op == '*')
		return (mul);
	if (op == '/')
		return (div);
	if (op == '%')
		return (mod);
	return (0);
}

int		main(int argc, char *argv[])
{
	int		val1;
	int		val2;
	char	op;

	if (argc != 4)
		return (0);
	op = argv[2][0];
	if (argv[2][1] || !is_valid_operator(op))
	{
		ft_putstr("0\n");
		return (0);
	}
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (val2 == 0 && (op == '/' || op == '%'))
		ft_putstr((op == '/') ? "Stop : division by zero"
				: "Stop : modulo by zero");
	else
		ft_putnbr(excute(val1, val2, what_oper(op)));
	ft_putstr("\n");
	return (0);
}
