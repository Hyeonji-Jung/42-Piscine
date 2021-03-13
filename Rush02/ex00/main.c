/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:39:32 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/13 20:55:09 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_strcpy(char *dest, char *from, char *to)
{
	while (from <= to)
		*(dest++) = *(from++);
	*dest = 0;
}

void	ft_error(char *str)
{
	while (str[i])
		write(2, str[i++], 1);
}

int		main(int argc, char **argv)
{
	if (argc > 3)
	{
		ft_error("Too many arguments\n");
		return (0);
	}
	else if (argc == 3)
		make_dict(argv[1]);
	else
		make_dict(DEFAULT_DICT);
	return (0);
}
