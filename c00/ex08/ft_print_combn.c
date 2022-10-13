/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:55:41 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/25 17:11:24 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int a);
void jg(char b, int a);

void ft_print_combn(int a)
{
	char	i;

	i = '0';
	jg(i, a);
}

void jg(char b, int a)
{
	if(a == 0)
		return;
	while ('9' > b)
	{
		write(1, &b, 1);
		jg(b, --a);
		b++;
	}
}

int		main(){
	ft_print_combn(2);
}
