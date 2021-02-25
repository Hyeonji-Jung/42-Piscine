/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:28:28 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 16:06:38 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	to_hex(int c);
void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	c[100] = "Coucou\ntu vas bien ?";
	char	c2[11] = {1,2,3,4,5,6,7,8,9,10};

	ft_putstr_non_printable(c);
	ft_putstr_non_printable(c2);

	return (0);
}
