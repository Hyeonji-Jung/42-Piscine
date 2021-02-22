/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:51:59 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/22 21:54:39 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_str(int i, int j, char *str, char *to_find)
{
	while (str[i++] == to_find[j++])
	{
		if (!to_find[j + 1])
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *point;
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		point = NULL;
		if (str[i] == to_find[j])
		{
			point = &str[i];
			if (check_str(i, j, str, to_find))
				break;
		else
		{
			i++;
			j = 0;
		}
	}
	return (point);
}
