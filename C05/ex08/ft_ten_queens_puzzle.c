/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 21:01:18 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 15:32:05 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_queens[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_val(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_queens, 11);
		++g_cnt;
	}
	r = -1;
	while (++r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_val(r, c, 1);
			g_queens[c] = '0' + r;
			rec(c + 1);
			set_val(r, c, 0);
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	g_queens[10] = '\n';
	g_cnt = 0;
	rec(0);
	return (g_cnt);
}
