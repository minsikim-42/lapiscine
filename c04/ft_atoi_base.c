/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:04:14 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/06 01:11:43 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_1toA(char *arr, char *base, int jin);
void	ft_atoi(char *str, char *base, char *arr, int jin);
int		check(char *str, int i);
int		ft_atoi_base(char *str, char *base);

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	char	arr[256];
	int		jin;

	i = 0;
	while (i < 15)
	{
		arr[i] = 0;
		i++;
	}
	i = 0;
	jin = 0;
	while (base[jin] != 0)
		jin++;
	ft_atoi(str, base, arr, jin);
	i = ft_1toA(arr, base, jin);
	return (i);
}

int		ft_1toA(char *arr, char *base, int jin)
{
	int		i;
	int		c;
	int		j;
	int		result;

	i = 0;
	result = 0;
	arr[0] == '-' ? i = i + 1 : i;
	while (arr[i] != 0)
	{
		j = 0;
		while (j < jin)
		{
			if (arr[i] == base[j])
			{
				c = j;
				break ;
			}
			j++;
		}
		result  = result * jin + c;
		i++;
	}
	arr[0] == '-' ? result = result * (-1) : result;
	printf("calcul ok\n");
	return (result);
}

void	ft_atoi(char *str, char *base, char *arr, int jin)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	i = check(str, i); // 체크
	j = 0;
	if (i < 0) // i번째와 음수
	{
		i = i * (-1);
		arr[j] = '-';
		j++;
	}
	printf("i = %d, str = %s\n", i, str);
	while (str[i] != 0) // str끝까지
	{
		k = 0;
		while (k++ < jin)
		{
			if (str[i] == base[k])
			{
				printf("arr%d(%c) = base%d(%c) = str%d(%c)\n", j, arr[j], k, base[k], i, str[i]);
				arr[j++] = base[k]; // 문제!
			}
		}
		i++;
	}
	printf("arr = %s\n, jin = %d, i = %d, j = %d, k = %d\n", arr, jin, i, j, k);
}

int		check(char *str, int i)
{
	i = 0;
	while (str[i] == ' ') // 쓸모없는것 쳐내기
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			i = i * (-1);
		i++;
	}
	printf("i = %d\n", i);
	return (i);
}

int main(){
	char str[] = "   -+-+-+c";
	char base[] = "0a23456789";
	printf("%d", ft_atoi_base(str, base));
}
