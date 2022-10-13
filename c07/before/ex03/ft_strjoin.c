/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 23:02:26 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/09 15:06:48 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		seplen(char *sep)
{
	int		i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src, int j)
{
	int		x;
	int		i;

	x = j;
	i = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = 0;
}

void	arry(char *arr, char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			arr[k++] = strs[i][j];
		if (i != size - 1)
		{
			j = -1;
			while (sep[++j])
				arr[k++] = sep[j];
		}
	}
	arr[k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*arr;
	int		i;
	int		j;

	i = 0;
	len = seplen(sep) * (size - 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	arr = (char *)malloc(len);
	arry(arr, strs, sep, size);
	return (arr);
}
#include <stdio.h>
int main(int argc, char *argv[])
{
	char sep[] = ",^^*";
	printf("%s", ft_strjoin(argc, argv, sep));
}
