/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:04:54 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 14:05:19 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xx;
	int	yy;

	yy = 1;
	while (yy <= y)
	{
		xx = 1;
		while (xx <= x)
		{
			if ((yy == 1 && xx == 1) || (yy == 1 && xx == x))
				ft_putchar('o');
			else if ((yy == y && xx == 1) || (yy == y && xx == x))
				ft_putchar('o');
			else if ((xx > 1 && xx < x) && (yy == 1 || yy == y))
				ft_putchar('-');
			else if ((yy > 1 && yy < y) && (xx == 1 || xx == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			xx++;
		}
		yy++;
		ft_putchar('\n');
	}
}
