/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:08:20 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/09 17:45:59 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_re(int nbr, int jin, char *base, char *arr, int count);
int		checkbase(char *base);
char	*ft_putnbr_base(int nbr, char *base);
int		ft_1toa(char *arr, char *base, int jin, int result);
void	ft_atoi(char *str, char *base, char *arr, int jin);
int		check(char *str, int i, int *mi);
int		ft_atoi_base(char *str, char *base);

int		main()
{
	char	nbr[] = "4321";
	char	base_from[] = "0123456789";
	char	base_to[] = "abcdefghij";
	printf("%d", ft_convert_base(nbr, base_from, base_to));
}

char	*ft_putnbr_base(int nbr, char *base) // 123 --> abc
{
	int		jin;
	int		bnum;
	char	arr2[33] = {0};

	jin = 0;
	while (base[jin] != 0)
		jin++;
	if (checkbase(base) && jin != 0 && jin != 1)
	{
		ft_re(nbr, jin, base, arr2, 0);
		arr2[0] = nbr % jin;
	}
	else
		return (NULL);
	return (arr2);
}

char	*ft_re(int nbr, int jin, char *base, char *arr, int count)
{
	int		bnum;

	if (nbr / jin != 0)
		ft_re(nbr / jin, jin, base, arr, count++);
	bnum = nbr % jin;
	arr[count] = base[bnum];
	return (arr);
}

int		checkbase(char *base)
{
	int		i;
	int		c;
	char	same[127];

	i = 0;
	while (i < 127)
	{
		same[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		c = base[i];
		if (same[c] != 0)
			return (0);
		else
			same[c] = 1;
		if (base[i] == ' ' || base[i] == '\t' || base[i] == '\n' ||
				base[i] == '\v' || base[i] == '\f' || base[i] == '\r' ||
				base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}
