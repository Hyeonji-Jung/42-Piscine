/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:29:03 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/13 20:34:58 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int		is_valid_line(char *str)
{
	int		col_cnt;
	int		key_cnt;
	int		val_cnt;

	col_cnt = 0;
	key_cnt = 0;
	val_cnt = 0;
	while (*str)
	{
		while (is_whitespace(*str))
			str++;
		if (*str == ':')
			col_cnt++;
		else
		{
			if (col_cnt)
				val_cnt++;
			else
				key_cnt++;
		}
		str++;
	}
	return (key_cnt > 0 && val_cnt > 0 && col_cnt == 1);
}
