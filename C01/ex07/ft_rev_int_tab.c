/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:30:16 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 16:16:30 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (index <= size / 2)
	{
		temp = tab[size - index - 1];
		tab[size - index - 1] = tab[index];
		tab[index] = temp;
		index++;
	}
}
