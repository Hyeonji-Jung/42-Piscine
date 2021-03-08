/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_mine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:54:32 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/08 18:59:52 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int		wd_cnt(char *str)
{
	int		cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_whitespace(*str))
		{
			cnt++;
			while (*str && !is_whitespace(*str))
				str++;
		}
		str++;
	}
	return (cnt);
}

void	ft_strcpy()
{
}

char	**ft_split(char *str)
{
	char	**arr;
	char	*from;
	int		i;

	arr = (char **)malloc(sizeof(char *) * wd_cnt(str) + 1);
	while (*str)
	{
	}
}
