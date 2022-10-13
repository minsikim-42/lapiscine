/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makearr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:58:05 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/29 02:37:27 by heelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makearr.h"

void	ft_numberinit(int *arr)
{
	if (*(arr + 3) == 5)
	{
		(*(arr + 2))++;
		*(arr + 3) = 1;
		if (*(arr + 2) == 5)
		{
			(*(arr + 1))++;
			*(arr + 2) = 1;
			if (*(arr + 1) == 5)
			{
				(*arr)++;
				*(arr + 1) = 1;
			}
		}
	}
}

int		ft_arrdoublecheck(int *arr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (*(arr + i) == *(arr + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_arrmake(int *arr, int c)
{
	int		i;

	i = 0;
	*arr = 1;
	*(arr + 1) = 2;
	*(arr + 2) = 3;
	*(arr + 3) = 4;
	while (i < c)
	{
		(*(arr + 3))++;
		ft_numberinit(arr);
		while (ft_arrdoublecheck(arr))
		{
			(*(arr + 3))++;
			ft_numberinit(arr);
		}
		i++;
	}
	return (*arr);
}

int		ft_coldcheck(int *arr, int row)
{
	int		i;
	int		j;

	while (row < 4)
	{
		i = 0;
		while (i < 3)
		{
			j = i + 1;
			while (j < 4)
			{
				if (*(arr + 4 * i + row) == *(arr + 4 * j + row))
					return (0);
				j++;
			}
			i++;
		}
		row++;
	}
	return (1);
}
