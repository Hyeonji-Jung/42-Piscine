/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:23:16 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/18 23:26:12 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int cnt;
	int	i;

	cnt = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]) != 0)
			++cnt;
	return (cnt);
}
