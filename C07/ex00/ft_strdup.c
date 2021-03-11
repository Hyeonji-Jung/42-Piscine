/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:44:40 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/11 12:25:55 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	len;
	char		*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(len + 1);
	if (*dest)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	dest[len] = '\0';
	while (--len >= 0)
		dest[len] = src[len];
	return (dest);
}
