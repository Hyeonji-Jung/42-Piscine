/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:06:10 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 14:37:13 by hyeojung         ###   ########.fr       */
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
			if ((yy == 1 && xx == 1) || (yy == y && xx == x))
				ft_putchar('A');
			else if ((yy == 1 && xx == x) || (yy == y && xx == 1))
				ft_putchar('C');
			else if ((xx > 1 && xx < x) && (yy == 1 || yy == y))
				ft_putchar('B');
			else if ((yy > 1 && yy < y) && (xx == 1 || xx == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			xx++;
		}
		yy++;
		ft_putchar('\n');
	}
}
