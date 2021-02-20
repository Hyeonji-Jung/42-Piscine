/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung </var/mail/hyeojung>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:03:45 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/20 11:53:00 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);

void	rush03(int x, int y)
{
	int x_index = 1;
	int y_index = 1;

	while (y_index <= y)
	{
		if (y_index == 1 || y_index == y)
		{
			while (x_index <= x)
			{
				if (x_index == 1)
				{
					ft_putchar('A');
				}
				else if (x_index == x)
				{
					ft_putchar('C');
				}
				else if (x_index > 1 && x_index < x)
				{
					ft_putchar('B');
				}
				else
				{
					break;
				}
				x_index++;
			}
			x_index = 1;
			y_index++;
		}
		else if (y_index > 1 && y_index < y)
		{
			while (x_index <= x)
			{
				if (x_index == 1 || x_index == x)
				{
					ft_putchar('B');
				}
				else if (x_index > 1 && x_index < x)
				{
					ft_putchar(' ');
				}
				x_index++;
			}
			x_index = 1;
			y_index++;
		}
		ft_putchar('\n');
	}
}
