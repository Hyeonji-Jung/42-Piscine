/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:38:03 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/24 16:17:52 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char 			*str;

	i = 0;
	str = dest;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (str);
}
