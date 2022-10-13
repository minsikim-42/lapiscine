/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:17:50 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/09 18:39:26 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

int		main(int ac, char *av[])
{
	printf("%s", s_stock_str *ft_strs_to_tab(ac, av).s);
}

copy_str(char *av, &st[i])

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st;
	int			i;

	if (!(*st = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	st[ac].s = NULL;
	i = 0;
	while (i < ac)
	{
		if (!copy_str(av[i], &st[i]))
			free_st(str, i);
		i++;
	}
	return (st);
}
