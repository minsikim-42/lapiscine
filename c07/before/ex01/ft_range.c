/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:42:20 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/09 15:29:05 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*arr;

	if (min >= max)
		return (NULL);
	if(!(arr = (int *)malloc(max - min + 1)))
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = 0;
	return (arr);
}
#include <unistd.h>
int main(){
	int *i;
	i = ft_range(2, 5);
	printf("%d %d %d", i[0], i[1], i[2]);
}
