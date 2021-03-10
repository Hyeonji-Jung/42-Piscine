/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:45:10 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 17:05:05 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi_base.c"

int		main(void)
{
	printf("input number : -123456, base \"0123456789\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-123456", "0123456789"));
	printf("Real Answer : -123456\n");
	fflush(stdout);
	printf("input number : 10, base \"01\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("10", "01"));
	printf("Real Answer : 1010\n");
	fflush(stdout);
	printf("input number : -yn, base \"poneyvif\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-yn", "poneyvif"));
	printf("Real Answer : -52\n");
	fflush(stdout);
}
