/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb22.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 04:46:27 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/25 14:53:27 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printcom(int a, int b);
void	ft_print_com2(void);

void	printcom(int a, int b)
{
	char	num[5];

	num[0] = (a / 10) + '0';
	num[1] = (a % 10) + '0';
	num[2] = ' ';
	num[3] = (b / 10) + '0';
	num[4] = (b % 10) + '0';
	write(1, num, 5);
	if (a == 98 && b == 99);
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			printcom(i, j);
			j++;
		}
		i++;
	}
}

int		main(){
	ft_print_comb2();
	return 0;
}
