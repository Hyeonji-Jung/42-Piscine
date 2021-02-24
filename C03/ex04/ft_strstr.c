/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:51:59 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/24 17:15:57 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;

	temp = to_find;
	while (*str)
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
			if (!(*to_find))
				return (str - (to_find - temp));
		}
		else
		{
			str++;
			to_find = temp;
		}
	}
	return (0);
}
