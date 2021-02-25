/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:26:06 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 12:35:06 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hex(char c)
{
	int	h1;
	int	h2;

	h1 = c / 16;
	h2 = c % 16;
	write(1, "\\", 1);
	if (h1 > 9)
		h1 += 'a' - 10;
	else
		h1 += '0';
	write(1, &h1, 1);
	if (h2 > 9)
		h2 += 'a' - 10;
	else
		h2 += '0';
	write(1, &h2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			to_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
