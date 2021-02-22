/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 12:14:53 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/22 12:33:42 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		i;
	char	*a;

	i = 0;
	a = &str[i];
	if (str[0] == '\0')
		return (1);
	while (*a++)
	{
		if (*a < 'A' || *a > 'Z')
			return (0);
	}
	return (1);
}
