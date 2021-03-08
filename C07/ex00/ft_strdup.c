/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:44:40 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/08 14:52:14 by hyeojung         ###   ########.fr       */
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
	dest[len] = '\0';
	while (--len >= 0)
		dest[len] = src[len];
	return (dest);
}
