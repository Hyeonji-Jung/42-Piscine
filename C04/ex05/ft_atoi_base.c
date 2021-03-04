/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:32:18 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/04 17:08:44 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		base_len(char *base)
{
	int		cnt;
	int		i;

	if (!base[0] || !base[1])
		return (0);
	cnt = 0;
	while (base[cnt])
	{
		i = cnt + 1;
		if (base[cnt] == '+' || base[cnt] == '-' || base[cnt] == ' ')
			return (0);
		while (base[i])
			if (base[cnt] == base[i++])
				return (0);
		cnt++;
	}
	return (cnt);
}

int		to_base(int n, int base)
{
	if (n == 0)
		return (0);
	return ((n % base) + 10 * to_base(n / base, base));
}

int		ft_atoi_base(char *str, char *base)
{
	int	num;
	int check_minus;

	num = 0;
	check_minus = 1;
	if (base_len(base) == 0)
		return (0);
	while ((*str >= 9  && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			check_minus *= -1;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += check_minus * (*(str++) - '0');
	}
	return (to_base(num, base_len(base)));
}
