/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:28:28 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/23 18:14:32 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	dec_to_hex(char c);
void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	c[1];

	c[0] = 1;
	ft_putstr_non_printable(c);
	return (0);
}
