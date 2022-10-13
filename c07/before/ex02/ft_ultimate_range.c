/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:03:47 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/10 16:48:11 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*copy;

	if (min >= max)
	{
		copy = NULL;
		return (0);
	}
	if (!(copy = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (min < max)
	{
		copy[i] = min;
		i++;
		min++;
	}
	*range = copy;
	return (i);
}
#include <stdio.h>
int main(){
	int r1 = 1;
	int r2 = 1;
	int r3 = 1;
	int *rrr[1];
	rrr[0] = &r1;
	//rrr[1] = &r2;
	//rrr[2] = &r3;
	printf("%d, %d, %d\n", ft_ultimate_range(rrr, 2, 5), rrr[0][0], rrr[0][1]/*, rrr[1], rrr[2]*/);
}
