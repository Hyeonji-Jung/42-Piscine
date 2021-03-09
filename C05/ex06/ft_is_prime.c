/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:14:37 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 18:22:57 by hyeojung         ###   ########.fr       */
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
	long long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	while (i < ftt_sqrt(nb) + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
