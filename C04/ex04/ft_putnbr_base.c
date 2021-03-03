/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:09:59 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/03 16:48:25 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (i + 1 < ft_strlen(base))
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	to_base(int nbr, char *base, int len)
{
	if (nbr == 0)
		return ;
	to_base(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = ft_strlen(base);
	if (check_base(base) == 0)
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	else if (nbr > 0)
	{
		to_base(nbr / i, base, i);
		write(1, &base[nbr % i], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		to_base(nbr / (-i), base, i);
		write(1, &base[-(nbr % i)], 1);
	}
}
