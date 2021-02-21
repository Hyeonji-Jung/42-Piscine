/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:35:23 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 11:35:00 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	a[9];
	int		index;

	a[0] = '0';
	index = 1;
	while (index < n)
	{
		a[index] = a[index - 1] + 1;
	}
}