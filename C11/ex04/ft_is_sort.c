/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.ir>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:26:31 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/19 00:17:46 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	temp;

	i = 0;
	while (--length > 1)
	{
		temp = f(tab[length], tab[length - 1]);
		if (temp == 0)
			continue;
		if (i == 0)
			i = temp;
		else if ((i < 0 && temp > 0) || (i > 0 && temp < 0))
			return (0);
	}
	return (1);
}
