/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:59:43 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 15:44:15 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long	n;

	n = 5;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2) || !(nb % 3))
		return (0);
	while (n * n <= nb)
	{
		if (!(nb % n) || !(nb % (n + 2)))
			return (0);
		n += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
