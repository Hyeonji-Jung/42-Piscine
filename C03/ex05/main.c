/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:09:08 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 17:38:54 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest1[100] = "abcdef";
	char dest2[100] = "abcdef";
	char *src = "012345";

	printf("ft: %u\n", ft_strlcat(dest1, src, 100));
	printf("ft: %s\n", dest1);
	printf("real: %lu\n", strlcat(dest2, src, 100));
	printf("real: %s\n", dest2);
	return 0;
}
