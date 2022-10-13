/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:31:09 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/25 18:42:11 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main()
{
	int		i;
	int		j;
	char	c;

	i = 7;
	j = 3;
	ft_swap(&i, &j);
	c = i + '0';
	write(1, &c, sizeof(c));
	return 0;
}
