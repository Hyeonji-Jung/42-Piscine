/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:44:38 by ijung             #+#    #+#             */
/*   Updated: 2021/03/06 14:58:40 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_condition[16];
extern int g_board[5][5];

int fill_row(int r, int c);
int chk_board(void);

int	is_white_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_valid_string(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		while (*str && is_white_space(*str))
			++str;
		if (*str)
		{
			if (*str >= '1' && *str <= '4')
			{
				if (i == 16 || (*(str + 1) && !is_white_space(*(str + 1))))
					return (0);
				g_condition[i++] = *str - '0';
			}
			else
				return (0);
			++str;
		}
	}
	return (i == 16);
}

int	main(int argc, char *argv[])
{
	if (argc != 2 || !(is_valid_string(argv[1])))
		write(1, "Error\n", 6);
	else if (!fill_row(1, 1))
		write(1, "Invalid Value\n", 14);
	return (0);
}
