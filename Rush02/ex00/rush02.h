/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:13:08 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/13 20:40:34 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define DEFAULT_DICT numbers.dict
# define STR_MAXLEN 

typedef struct	s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}	t_dict;

extern t_dict	*g_dict;
extern int		g_filedes;

void	ft_error(char *str);
void	make_dict(char *file);
void	put_to_dict(char *str);

char	*read_line(void);

int		is_whitespace(char c);
int		is_valid_line(char *str);

#endif
