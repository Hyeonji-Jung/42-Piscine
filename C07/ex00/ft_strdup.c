/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:44:40 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 17:59:27 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	length;
	char		*dest;

	length = 0;
	while (src[length])
		length++;
	dest = (char*)malloc(length + 1);
	dest[length] = '\0';
	while (--length >= 0)
		dest[length] = src[length];
	return (dest);
}
