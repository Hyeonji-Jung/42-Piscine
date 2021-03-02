/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:22:12 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/02 21:29:45 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *temp;
	int i;

	if (min >= max)
		return (0);
	temp = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		temp[i++] = min++;
	return (temp);
}
