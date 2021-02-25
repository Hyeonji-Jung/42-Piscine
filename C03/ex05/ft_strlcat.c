/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:55:30 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 16:28:12 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest && i < size)
	{
		i++;
		dest++;
	}
	while (*src && i < size - 1)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}
