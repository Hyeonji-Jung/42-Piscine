/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 22:39:57 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 21:49:58 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int		chk_valid(char *base, int *len)
{
	int		chk[256];
	int		i;
	char	c;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (chk[(int)c] || c == '+' || c == '-' || is_whitespace(c))
			return (0);
		chk[(int)c] = 1;
		++(*len);
	}
	if (*len <= 1)
		return (0);
	return (1);
}
