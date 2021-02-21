/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:06:47 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 14:32:03 by hyeojung         ###   ########.fr       */
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
			if ((b == 1 && a == x) || ((b == y && a == 1) && x != 1 && y != 1))
				ft_putchar('\\');
			else if ((b == 1 && a == 1) || (b == y && a == x))
				ft_putchar('/');
			else if ((a > 1 && a < x) && (b == 1 || b == y))
				ft_putchar('*');
			else if ((b > 1 && b < y) && (a == 1 || a == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
