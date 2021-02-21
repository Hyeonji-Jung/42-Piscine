/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:16:22 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/21 18:55:26 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while(src[index++] != '\0')
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[50] = "abcdefgh";
	printf("my: %s\nnotmy:%s\n", ft_strcpy(dest, "abcd"), strcpy(dest, "abcd"));
}
