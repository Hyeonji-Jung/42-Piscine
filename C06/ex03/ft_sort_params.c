/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:42:11 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/11 11:05:28 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j + 1 < argc)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

int		main(int argc, char **argv)
{
	sort_argv(argc, argv);
	while (--argc > 0)
	{
		ft_putstr(argv[argc]);
		ft_putstr("\n");
	}
	return (0);
}
