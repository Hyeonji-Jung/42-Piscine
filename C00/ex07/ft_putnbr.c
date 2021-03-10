/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:44:32 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 17:15:20 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		strlength(int nb)
{
	int	length;

	length = 1;
	if (nb < 0)
		length++;
	while (nb / 10 != 0)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

void	ft_putnbr(int nb)
{
	int		len;
	int		number;
	char	num[12];

	len = strlength(nb);
	number = nb;
	while (len > 0)
	{
		if (nb >= 0)
			num[len - 1] = (nb % 10) + '0';
		else
			num[len - 1] = (nb % 10) * -1 + '0';
		if (nb / 10 != 0)
			nb /= 10;
		len--;
	}
	if (nb >= 0)
		num[0] = nb + '0';
	else
		num[0] = '-';
	write(1, num, strlength(number));
}
