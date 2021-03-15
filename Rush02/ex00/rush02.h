/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:13:08 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/13 23:02:11 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define DEFAULT_DICT "numbers.dict"
# define STR_MAXLEN 1024

typedef struct	s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}				t_dict;

extern t_dict	*g_dict;
extern int		g_filedes;

t_dict			*one_dict(char *key, char *val);

void			ft_strcpy(char *dest, char *from, char *to);
void			ft_error(char *str);
void			make_dict(char *file);
void			put_to_dict(char *str);
void			link_dict(char *key, char *val);

char			*read_line(void);

int				is_whitespace(char c);
int				is_valid_line(char *str);

#endif
