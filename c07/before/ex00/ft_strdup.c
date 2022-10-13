/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:21:36 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/09 14:12:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*p;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if(!(p = (char *)malloc(i + 1)))
		return (NULL);
	copy = p;
	while (*src)
		*(copy++) = *(src++);
	*copy = 0;
	return (p);
}

int main(){
	char	*k;
	k = ft_strdup("abc");
	printf("%s\n", k);
}
