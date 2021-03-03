/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:20:04 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/03 14:56:31 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		check_minus;
	int		number;

	check_minus = 1;
	number = 0;
	while (!(*str >= '0' && *str <= '9'))
	{
		if (*str == '-')
			check_minus *= -1;
		else if (*str == '+' || *str == ' '
				|| *str == '\t' || *str == '\v'
				|| *str == '\n' || *str == '\r'
				|| *str == '\f')
			;
		else
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += check_minus * (*str - '0');
		str++;
	}
	return (number);
}
