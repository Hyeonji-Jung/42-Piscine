/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:06:10 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 15:11:35 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((b == 1 && a == 1) || ((b == y && a == x) && x != 1 && y != 1))
				ft_putchar('A');
			else if ((b == 1 && a == x) || (b == y && a == 1))
				ft_putchar('C');
			else if ((a > 1 && a < x) && (b == 1 || b == y))
				ft_putchar('B');
			else if ((b > 1 && b < y) && (a == 1 || a == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
