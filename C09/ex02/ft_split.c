/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:16:10 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/04 12:45:21 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		wd_cnt(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			cnt++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *from, char *to)
{
	while (from < to)
		*(dest++) = *(from++);
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*from;
	int		i;

	arr = (char **)malloc(sizeof(char *) * wd_cnt(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			from = str;
			while (*str && !is_sep(*str, charset))
				str++;
			arr[i] = (char *)malloc(str - from + i);
			ft_strcpy(arr[i++], from, str);
		}
		str++;
	}
	arr[i] = 0;
	return (arr);
}
