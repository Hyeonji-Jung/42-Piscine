/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:26:06 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/24 11:42:41 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hex(char c)
{
	int		hex1;
	int		hex2;

	hex1 = (c / 16) + '0';
	hex2 = c % 16;
	write(1, &hex1, 1);
	if (c > 9)
		hex2 += 87;
	else if (c <= 9)
		hex2 += '0';
	write(1, &hex2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			to_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
