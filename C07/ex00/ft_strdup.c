/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:44:40 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 17:13:18 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	length;
	char		*dest;

	len = 0;
	while (src[length])
		length++;
	dest = (char*)malloc(len + 1);
	dest[length] = '\0';
	while (--length >= 0)
		dest[len] = src[len];
	return (dest);
}
