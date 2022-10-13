/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:05:08 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/26 16:48:40 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	jg(char *sort, int s, int count);

void	jg(char *sort, int s, int count)
{
	char	temp;
	int		j;

	j = 0;
	if (count == s)
		return ;
	while (j < s - 1)
	{
		if (sort[j] >= sort[j + 1])
		{
			temp = sort[j];
			sort[j] = sort[j + 1];
			sort[j + 1] = temp;
		}
		j++;
	}
	jg(sort, s, count + 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;

	i = 0;
	jg(tab, size, i);
}
