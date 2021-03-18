/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:05:04 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/18 23:10:08 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	arr = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}
