/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:26:06 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/23 18:10:04 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex(char c)
{
	int		dec;
	char	hex;

	dec = c;
	if (dec % 16 < 10)
	{
		hex = dec % 16 + '0';
		write(1, &hex, 1);
	}
	else if (dec % 16 >= 10)
	{
		hex = dec % 16 + 'a' - 10;
		write(1, &hex, 1);
	}
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
			dec_to_hex(str[i] / 16);
			dec_to_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
