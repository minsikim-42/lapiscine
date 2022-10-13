/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heelee <heelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:59:10 by heelee            #+#    #+#             */
/*   Updated: 2020/11/29 20:58:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkarr.h"
#include "makearr.h"
#include <unistd.h>

int		g_input[4][4]; // global valiable

int		ft_recursive(int *arr, int index, int *origin)
{
	int		i;

	i = 0;
	while (i < 24)
	{
		ft_arrmake(arr, i); // garo make
		if (ft_checkrow(arr, 4, g_input[2][index], g_input[3][index])) // check arr too 2 inza for 24 times, if right;
		{
			if (index == 3) // when index 3;
			{
				if (ft_checkcol(origin, g_input, 0) && ft_coldcheck(origin, 0))
					return (1);
			}
			else if (ft_recursive(arr + 4, index + 1, origin)) // come in for 3 times
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_arrprint(int arr[][4])
{
	int		i;
	int		j;
	char	chr;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			chr = arr[i][j] + '0';
			write(1, &chr, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_arrput(char *arr[])
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (arr[1][i] != 0)
	{
		if (arr[1][i] != ' ')
		{
			if (y >= 4)
			{
				x++;
				y = 0;
			}
			if (x == 4)
				break ;
			g_input[x][y] = arr[1][i] - '0';
			y++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int output[4][4];

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	ft_arrput(argv);
	if (ft_recursive(output[0], 0, *output))
		ft_arrprint(output);
	else
		write(2, "Error\n", 6);
	return (0);
}
