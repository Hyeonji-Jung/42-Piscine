/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:41:20 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 16:41:41 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr.c"

int		main(void)
{
	char *str;

	str = "Hello World";
	printf("string is \"%s\"\n",str);
	ft_putstr(str);
	printf("\n");
}
