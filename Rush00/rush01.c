/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:09:37 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 15:09:57 by hyeojung         ###   ########.fr       */
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
				ft_putchar('/');
			else if ((b == y && a == 1) || (b == 1 && a == x))
				ft_putchar('\\');
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
