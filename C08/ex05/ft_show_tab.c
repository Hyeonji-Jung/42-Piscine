/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 23:27:35 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 23:30:46 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	write_par(int size)
{
	char c;

	if (!size)
		return ;
	c = '0' + size % 10;
	write_par(size / 10);
	write(1, &c, 1);
}

void	newline(void)
{
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		newline();
		if (par[i].size)
			write_par(par[i].size);
		else
			write(1, "0", 1);
		newline();
		write(1, par[i].copy, par[i].size);
		newline();
		++i;
	}
}
