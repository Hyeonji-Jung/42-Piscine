/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:28:28 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 13:21:07 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	to_hex(int c);
void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	c[100] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(c);
	return (0);
}
