/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:19:30 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/02 17:06:26 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		to_base(int n, int base)
{
	int nb;
	int minus;

	nb = 0;
	minus = 1;
	if (n < 0)
		minus = -1;
	while (n != 0)
	{
		
	}
	return (nb);
}

int		ft_atoi_base(char *str, char *base)
{
	int		check_minus;
	int		n;

	check_minus = 1;
	n = 0;
	while (*str && !(*str >= '0' && *str <= '9'))
	{
		if (*str == '-')
			check_minus *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		n *= 10;
		n += check_minus * (*str - '0');
		str++;
		printf("n: %d\n", n);
	}
	return (to_base(n, ft_strlen(base)));
}

int		main(void)
{
	char str[100] = "-+-+42";
	printf("%s\n", str);
	printf("%d\n", ft_atoi_base(str, "01234567"));
}
