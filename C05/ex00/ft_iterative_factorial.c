/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:47:34 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/01 15:50:56 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;
	int i;

	if (nb < 0)
		return (0);
	i = nb;
	fac = 1;
	while (i > 0)
	{
		fac += i;
		i--;
	}
	return (fac);
}
