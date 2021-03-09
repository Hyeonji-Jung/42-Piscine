/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:03:51 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 18:04:10 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_factorial.c"

int	main(void)
{
	int n;

	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
}
