/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:16:32 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 15:41:47 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char dest[100] = {0,};
	char *src = "0123456789";

	printf("%d\n", ft_strlcpy(dest, src, -1));
	printf("%s\n", dest);
	return 0;
}
