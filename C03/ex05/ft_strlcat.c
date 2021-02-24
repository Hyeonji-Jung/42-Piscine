/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:55:30 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/24 18:37:43 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 1;
	dest += ft_strlen(dest);
	while (i < size - ft_strlen(dest) && *src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (i);
}

int		main(void)
{
	char	dest[20] = "123456";
	char	*src = "abcde";
	printf("%d\n", strlcat(dest, src, 3));
	printf("%d\n", ft_strlcat(dest, src, 3));
}
