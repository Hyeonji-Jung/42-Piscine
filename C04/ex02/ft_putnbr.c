/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:22:53 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/01 15:05:53 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
		write(1, "-", 1);
	while (nb / 10 != 0)
	{
		if (nb > 0)
			c = nb % 10 + '0';
		else
			c = nb % 10 * (-1) + '0';
		write (1, &c, 1);
		if (nb / 10 != 0)
			nb /= 10;
	}
	c = nb;
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(2147483647);
}
