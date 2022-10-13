/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:37:47 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/26 14:49:35 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	char	rev[size];
	int		i;
	int		mi;

	i = 0;
	if (*tab < 0)
	{
		mi = -1;
		*tab = *tab * (-1);
	}
	while (i < size)
	{
		rev[i] = *tab % 10 + '0';
		*tab = *tab / 10;
		i++;
	}
	if (mi == -1)
		write(1, "-", 1);
	write(1, rev, size);
}

int		main()
{
	int		k=0;
	ft_rev_int_tab(&k, 1);
	return 0;
}
