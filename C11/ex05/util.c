/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:37:07 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/19 01:54:12 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.h"

void	ft_putnbr_sub(int nb)
{
	char ch;

	if (nb == 0)
		return ;
	ft_putnbr_sub(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_sub(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		ft_putnbr_sub(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}

int		ft_atoi(char *str)
{
	int ret;
	int chk_minus;

	ret = 0;
	chk_minus = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			chk_minus *= -1;
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += (chk_minus * (*(str++) - '0'));
	}
	return (ret);
}
