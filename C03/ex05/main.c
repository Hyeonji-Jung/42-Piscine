/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:09:08 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 16:32:54 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[100] = "abcdef";
	char *src = "012345";

	printf("%u\n", ft_strlcat(dest, src, 100));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest, src, 100));
	printf("%s\n", dest);
	return 0;
}
