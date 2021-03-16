/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 22:39:05 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 22:04:49 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_whitespace(char c);
int		chk_valid(char *base, int *len);

int		ft_nbr_size(long long nbr, int baselen)
{
	int size;

	if (!nbr)
		return (1);
	size = 0;
	if (nbr < 0)
		size++;
	while (nbr)
	{
		nbr /= baselen;
		size++;
	}
	return (size);
}

char	*putnbr_base(int nbr, char *base, int baselen)
{
	char		*arr;
	long long	temp;
	int			nbr_size;

	if (!nbr)
	{
		arr = (char*)malloc(2);
		arr[0] = base[0];
		arr[1] = 0;
		return (arr);
	}
	temp = nbr;
	nbr_size = ft_nbr_size(temp, baselen);
	arr = (char*)malloc(nbr_size + 1);
	arr[nbr_size] = 0;
	temp = (temp < 0) ? temp * (-1) : temp;
	while (temp)
	{
		arr[--nbr_size] = base[temp % baselen];
		temp /= baselen;
	}
	if (nbr < 0)
		arr[0] = '-';
	return (arr);
}

int		atoi_base(char *str, char *base, int baselen)
{
	int	n;
	int	minus;
	int	i;

	n = 0;
	minus = 1;
	while (is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			minus *= -1;
	while (*str)
	{
		i = -1;
		while (++i < baselen)
			if (*str == base[i])
				break ;
		if (i == baselen)
			break ;
		n = n * baselen + (minus * i);
		str++;
	}
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		baselen_f;
	int		baselen_t;
	int		atoi_num;

	if (!chk_valid(base_from, &baselen_f)
			|| !chk_valid(base_to, &baselen_t))
		return (0);
	atoi_num = atoi_base(nbr, base_from, baselen_f);
	return (putnbr_base(atoi_num, base_to, baselen_t));
}
