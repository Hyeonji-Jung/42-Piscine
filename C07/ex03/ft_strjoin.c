/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:25:26 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/16 22:06:43 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		cnt;
	int		i;
	char	*temp;

	cnt = 0;
	i = 0;
	if (size == 0)
	{
		arr = (char*)malloc(1);
		arr[0] = 0;
		return (arr);
	}
	while (i < size)
		cnt += ft_strlen(strs[i++]);
	arr = (char *)malloc(cnt + ft_strlen(sep) * (size - 1) + 1);
	temp = ft_strcat(arr, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (arr);
}
