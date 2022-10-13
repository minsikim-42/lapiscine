/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:11:11 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/30 14:54:56 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int main(){
	int j;
	char st[1] = "a";
	j = ft_strlen(st);
	write(1, st, j);
	return 0;
}
