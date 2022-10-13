/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 00:27:04 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/25 01:07:20 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char n[7];

	n[0] = '0';
	n[1] = '0';
	n[2] = ' ';
	n[3] = '0';
	n[4] = '0';
	n[5] = ',';
	n[6] = ' ';
	while (n[0] <= '9')
	{
		while (n[1] <= '8')
		{
			while (n[3] <= '9')
			{
				while (n[4] <= '9')
				{
					if (n[0] == '9' && n[1] == '8')
					{
						write(1, "98 99", 5);
						break ;
					}
					else
						write(1, n, 7);
					n[4]++;
				}
				n[4] = '0';
				n[3]++;
			}
			n[3] = n[0];
			n[4] = n[1] + 1;
			n[1]++;
		}
		n[1] = '0';
		n[0]++;
	}
}

int main(){
	ft_print_comb2();
	return 0;
}