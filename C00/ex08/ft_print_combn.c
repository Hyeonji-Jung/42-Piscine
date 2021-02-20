/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:35:23 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/20 23:54:56 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int n)
{
	char a[9];
	int index;

	a[0] = '0';
	index = 1;
	while (index < n)
	{
		a[index] = a[index - 1] + 1;
	}
}

int		main(void)
{
	ft_print_combn(3);
	return (0);
}
