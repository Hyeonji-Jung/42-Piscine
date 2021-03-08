/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:25:26 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/08 18:34:38 by hyeojung         ###   ########.fr       */
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

void	ft_strcat(char *dest, char *src)
{
	char *str;

	str = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
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
	ft_strcat(arr, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(arr, sep);
		ft_strcat(arr, strs[i++]);
	}
	arr[cnt + ft_strlen(sep) * (size - 1)] = 0;
	return (arr);
}
