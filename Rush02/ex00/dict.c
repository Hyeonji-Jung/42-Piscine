/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:24:55 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/13 20:59:58 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	put_to_dict(char *str)
{
	char	*key;
	char	*val;
	char	*tmp;
	char	*separator;

	key = str;
	tmp = str;
	separator = str;
	while (*separator != ':')
		separator++;
	key = (char*)malloc(separator - key + 1);
	ft_strcpy(key, str, separator - 1);
	val = ++separator;
	str = val;
	while (*separator)
		separator++;
	val = (char*)malloc(separator - val + 1);
}

char	*read_line(void)
{
	char	*ret;
	int		idx;
	ret = (char*)malloc(STR_MAXLEN);
	idx = -1;
	while (read(g_filedes, &ret[++idx], 1))
	{
		if (idx == STR_MAXLEN)
		{
			free(ret);
			ft_error("Too many words in the line\n");
			return (0);
		}
		if (ret[idx] == '\n')
		{
			ret[idx] = 0;
			break ;
		}
	}
	return (ret);
}

void	make_dict(char *file)
{
	char	*line;

	if (g_filedes = open(file, O_RDONLY) == -1)
	{
		ft_error("Can`t open .dict file\n");
		return ;
	}
	while (line = read_line())
	{
		if (!*line)
			continue ;
		if (!is_valid_line(line))
		{
			ft_error("Can`t read .dict file\n");
			break ;
		}
		put_to_dict(line);
	}
}
