/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:20:04 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/08 14:07:59 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		check_minus;
	int		number;

	check_minus = 1;
	number = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v'
			|| *str == '\n' || *str == '\r' || *str == '\f')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			check_minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += check_minus * (*(str++) - '0');
	}
	return (number);
}
