/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_and_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:45:02 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/06 15:05:52 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_board[5][5];
int		g_chk_row[5][5];
int		g_chk_col[5][5];

int		fill_row(int r, int c);
int		chk_board(void);

void	print_board(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			c = g_board[i][j] + '0';
			write(1, &c, 1);
			if (j == 4)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
		}
	}
}

int		fill_col(int r, int c)
{
	int		i;

	i = 0;
	while (++i < 5)
	{
		if (g_chk_row[r][i] || g_chk_col[c][i])
			continue;
		g_chk_row[r][i] = 1;
		g_chk_col[c][i] = 1;
		g_board[r][c] = i;
		if (fill_row(r, c + 1))
			return (1);
		g_board[r][c] = 0;
		g_chk_row[r][i] = 0;
		g_chk_col[c][i] = 0;
	}
	return (0);
}

int		fill_row(int r, int c)
{
	if (r == 4 && c == 5)
	{
		if (chk_board())
		{
			print_board();
			return (1);
		}
		return (0);
	}
	else if (c == 5)
		return (fill_row(r + 1, 1));
	else
		return (fill_col(r, c));
}
