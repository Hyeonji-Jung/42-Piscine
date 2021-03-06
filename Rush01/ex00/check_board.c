/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:03:51 by gyeon             #+#    #+#             */
/*   Updated: 2021/03/06 15:05:15 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int g_condition[16];
extern int g_board[5][5];

int	col_up(int cnt_see)
{
	int max;
	int i;
	int value;

	max = 0;
	value = 0;
	i = 1;
	while (i < 5)
	{
		if (max < g_board[i][cnt_see])
		{
			max = g_board[i][cnt_see];
			value++;
		}
		i++;
	}
	return (value);
}

int	col_down(int cnt_see)
{
	int max;
	int i;
	int value;

	max = 0;
	value = 0;
	i = 4;
	while (i > 0)
	{
		if (max < g_board[i][cnt_see])
		{
			max = g_board[i][cnt_see];
			value++;
		}
		i--;
	}
	return (value);
}

int	row_up(int cnt_see)
{
	int max;
	int i;
	int value;

	max = 0;
	value = 0;
	i = 1;
	while (i < 5)
	{
		if (max < g_board[cnt_see][i])
		{
			max = g_board[cnt_see][i];
			value++;
		}
		i++;
	}
	return (value);
}

int	row_down(int cnt_see)
{
	int max;
	int i;
	int value;

	max = 0;
	value = 0;
	i = 4;
	while (i > 0)
	{
		if (max < g_board[cnt_see][i])
		{
			max = g_board[cnt_see][i];
			value++;
		}
		i--;
	}
	return (value);
}

int	chk_board(void)
{
	int cnt_see;

	cnt_see = 1;
	while (cnt_see < 5)
	{
		if (col_up(cnt_see) != g_condition[cnt_see - 1])
			return (0);
		if (col_down(cnt_see) != g_condition[cnt_see + 3])
			return (0);
		if (row_up(cnt_see) != g_condition[cnt_see + 7])
			return (0);
		if (row_down(cnt_see) != g_condition[cnt_see + 11])
			return (0);
		cnt_see++;
	}
	return (1);
}
