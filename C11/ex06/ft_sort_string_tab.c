/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 02:16:08 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/19 02:23:14 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		tab_size(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		++size;
	return (size);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	size = tab_size(tab);
	i = 1;
	while (i++ < size)
	{
		j = 0;
		while (++j < size)
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}
