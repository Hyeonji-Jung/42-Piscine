/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:09:59 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 10:46:02 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_base;
int		g_length;

void	print_num(int nbr)
{
	if (nbr == 0)
		return ;
	print_num(nbr / g_length);
	write(1, &g_base[nbr % g_length], 1);
}

int		get_length(void)
{
	int chk[256];
	int i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	g_length = 0;
	while (g_base[g_length])
	{
		if (chk[(int)g_base[g_length]] ||
				g_base[g_length] == '+' ||
				g_base[g_length] == '-')
			return (0);
		chk[(int)g_base[g_length++]] = 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long tmp;

	g_base = base;
	if (!get_length() || g_length == 0 || g_length == 1)
		return ;
	tmp = nbr;
	if (tmp < 0)
	{
		tmp *= -1;
		write(1, "-", 1);
	}
	print_num(tmp / g_length);
	write(1, &g_base[tmp % g_length], 1);
}
