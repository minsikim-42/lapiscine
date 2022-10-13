/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:59:11 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/24 00:25:43 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[5];

	num[0] = '0'-1;
	num[3] = ',';
	num[4] = ' ';

	while(++num[0] <= '7')
	{
		num[1] = num[0];
		while(++num[1] <= '8')
		{
			num[2] = num[1];
			while(++num[2] <= '9')
			{
				if(num[0] == '7')
					write(1, "789", 3);
				else
					write(1, &num, 5);
			}
		}
	}
}

int main(){
	ft_print_comb();
	return 0;
}
