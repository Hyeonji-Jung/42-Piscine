/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 12:54:26 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/22 13:37:20 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}
void	to_uppercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while(str[i++])
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			to_lowercase(&str[i]);
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			to_lowercase(&str[i]);
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			to_lowercase(&str[i]);
		else
			to_uppercase(&str[i]);

	}
	return (str);
}
