/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:04:49 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/25 15:06:56 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

	char *ptr = ft_strstr(s1, "den");     // den으로 시작하는 문자열 검색, 포인터 반환

	while (ptr != NULL)                // 검색된 문자열이 없을 때까지 반복
	{
    	printf("%s\n", ptr);           // 검색된 문자열 출력
    	ptr = ft_strstr(ptr + 1, "den");  // den 포인터에 1을 더하여 e부터 검색
	}
	return 0;
}
