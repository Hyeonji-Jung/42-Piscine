/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:35:23 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/15 19:45:12 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_length;
char	g_comb[10];

void	rec(int prev, int n)
{
	int	i;

	if (n == g_length)
	{
		write(1, g_comb, g_length);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_length + n)
	{
		g_comb[n] = '0' + i;
		rec(i, n + 1);
	}
}

void	print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	g_length = n;
	while (i < 10 - n)
	{
		g_comb[0] = '0' + i;
		rec(i++, 1);
	}
	print_last(i);
}
