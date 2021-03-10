/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:55:30 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 21:20:05 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;

	cnt = 0;
	while (*dest && cnt < size)
	{
		cnt++;
		dest++;
	}
	while (*src && cnt + 1 < size)
	{
		*dest = *src;
		cnt++;
		dest++;
		src++;
	}
	if (cnt < size)
		*dest = 0;
	while (*src)
	{
		src++;
		cnt++;
	}
	return (cnt);
}
