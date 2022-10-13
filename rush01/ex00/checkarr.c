/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:58:41 by jinbekim          #+#    #+#             */
/*   Updated: 2020/11/29 02:37:00 by heelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkarr.h"

int		checkarrstartnum(int *arr, int arrlength)
{
	int		i;
	int		startcnt;

	i = 1;
	startcnt = 1;
	while (i < arrlength)
	{
		if (arr[0] < arr[i])
		{
			startcnt++;
			if (arr[i] < arr[i - 1])
				startcnt--;
			if (arr[i] == arrlength)
				break ;
		}
		i++;
	}
	return (startcnt);
}

int		checkarrendnum(int *arr, int arrlength)
{
	int		i;
	int		endcnt;

	endcnt = 1;
	i = arrlength - 1;
	while (i > 0)
	{
		if (arr[arrlength - 1] < arr[i - 1])
		{
			endcnt++;
			if (arr[i - 1] < arr[i])
				endcnt--;
			if (arr[i - 1] == arrlength)
				break ;
		}
		i--;
	}
	return (endcnt);
}

int		ft_checkrow(int *arr, int arrlength, int startnum, int endnum)
{
	if (checkarrstartnum(arr, arrlength) != startnum)
		return (0);
	if (checkarrendnum(arr, arrlength) != endnum)
		return (0);
	return (1);
}

int		ft_b(int *arr, int col)
{
	int		b;
	int		i;
	int		down;

	while (col < 4)
	{
		down = 1;
		b = *(arr + (3 * 4) + col);
		i = 0;
		while (i <= 4)
		{
			if (b < *(arr + (4 - i) * 4 + col))
			{
				down++;
				b = *(arr + (4 - i) * 4 + col);
			}
			i++;
		}
		col++;
	}
	return (down);
}

int		ft_checkcol(int *arr, int input[][4], int col)
{
	int		up;
	int		i;
	int		s;

	while (col < 4)
	{
		up = 1;
		s = *(arr + col);
		i = 0;
		while (i <= 4)
		{
			if (s < *(arr + i * 4 + col) && i != 4)
			{
				up++;
				s = *(arr + i * 4 + col);
			}
			i++;
		}
		if (up != input[0][col] && ft_b(arr, col) != input[1][col])
			return (0);
		col++;
	}
	return (1);
}
