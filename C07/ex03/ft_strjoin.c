/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:25:26 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/03 12:30:26 by hyeojung         ###   ########.fr       */
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
	char *str;

	str = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (i < size)
		cnt += ft_strlen(strs[i++]);
	arr = (char *)malloc(cnt + ft_strlen(sep) * (size - 1) + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i++]);
		ft_strcat(arr, sep);
	}
	arr[cnt + ft_strlen(sep) * (size - 1)] = 0;
	return (arr);
}
