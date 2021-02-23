/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:13:35 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/23 18:12:52 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    dec_to_hex(char c)
{
	int		dec;
    char    hex;

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

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;

	i = 0;
	while (addr[i])
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, &addr[i], 1);
		else if 
		{
			dec_to_hex(addr[i] / 16);
			dec_to_hex(addr[i]);
			write(1, " ", 1);
		}
		i++;
	}
	return (addr);
}
