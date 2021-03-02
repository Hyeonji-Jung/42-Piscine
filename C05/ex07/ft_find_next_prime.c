/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:59:43 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/02 18:23:30 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int	i;
	int	cnt;

	if (nb < 3)
		return (2);
	while (nb)
	{
		i = 3;
		cnt = 0;
		while (i < nb)
		{
			if (nb % i == 0)
				cnt++;
			i++;
		}
		if (cnt == 0)
			break;
		nb++;
	}
	return (nb);
}
