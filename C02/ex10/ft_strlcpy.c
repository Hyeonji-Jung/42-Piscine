/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:16:42 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/24 15:25:41 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	temp;

	i = 0;
	temp - 0;
	while (src[i])
		i++;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		temp++;
	}
	dest[temp] = '\0';
	return (i);
}
