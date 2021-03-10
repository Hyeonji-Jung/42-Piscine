/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:44:41 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 16:45:02 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "ft_putnbr_base.c"

int		main(void)
{
	printf("input number : -123456, base \"helo\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	printf("Real Answer : -eolhlehhh\n");
	fflush(stdout);
	printf("input number : -2147483648, base \"0123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	printf("Real Answer : -2147483648\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"0123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\t123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\n123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\v123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\f123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\r123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \" 123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
}
