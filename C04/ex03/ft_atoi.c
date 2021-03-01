/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:20:04 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/01 15:35:36 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main(void)
{
	char str[100] = "-+-+-+-+-asdf01234";
	printf("%s\n", str);
	printf("%d\n", ft_atoi(str));
}
