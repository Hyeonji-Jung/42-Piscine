/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:04:48 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 18:05:02 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_power.c"

int	main(void)
{
	printf("10^2 = %d\n", ft_iterative_power(10, 2));
	printf("10^0 = %d\n", ft_iterative_power(10, 0));
	printf("0^0 = %d\n", ft_iterative_power(0, 0));
	printf("10^-1 = %d\n", ft_iterative_power(10, -1));
	printf("10^5 = %d\n", ft_iterative_power(10, 5));
}
