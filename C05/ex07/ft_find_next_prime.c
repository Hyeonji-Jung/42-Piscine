/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:59:43 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/04 13:11:46 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ftt_sqrt(int nb)
{
	long long	i;

	i = 1;
	while (i * i < nb)
		i++;
	return (i);
}

int		ft_is_prime(int nb)
{
	int	i;

	i = 4;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < ftt_sqrt(nb) + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
