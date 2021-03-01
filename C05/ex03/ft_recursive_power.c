/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:16:33 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/01 16:32:36 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive(nb, power - 1));
}
