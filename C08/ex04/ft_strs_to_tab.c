/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:03:09 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 23:26:50 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					size_str(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

void				ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *arr;
	int			i;

	arr = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = size_str(av[i]);
		arr[i].str = (char*)malloc(arr[i].size + 1);
		arr[i].copy = (char*)malloc(arr[i].size + 1);
		ft_strcpy(arr[i].str, av[i]);
		ft_strcpy(arr[i].copy, av[i]);
		++i;
	}
	arr[i].str = 0;
	return (arr);
}
