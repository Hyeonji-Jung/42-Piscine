/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:07:32 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 18:07:49 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_fibonacci.c"

int	main(void)
{
	int	index;

	index = -2;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}
