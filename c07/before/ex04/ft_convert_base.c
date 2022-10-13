/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <spalstlr321@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:44:16 by minsikim          #+#    #+#             */
/*   Updated: 2020/12/09 17:45:51 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_re(int nbr, int jin, char *base, char *arr, int count);
int		checkbase(char *base);
char	*ft_putnbr_base(int nbr, char *base);
int		ft_1toa(char *arr, char *base, int jin, int result);
void	ft_atoi(char *str, char *base, char *arr, int jin);
int		check(char *str, int i, int *mi);
int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to) // start
{
	int		NUM;
	char	*arr[33];
	NUM = ft_atoi_base(nbr, base_from); // abc --> 123
	arr = ft_putnbr_base(NUM, base_to); // 123 --> abc (to)
	return (arr);
}

int		ft_atoi_base(char *str, char *base) // start2(from)
{
	char	arr[33];
	int		jin;
	int		result;

	result = 0;
	jin = 0;
	while (jin < 33)
	{
		arr[jin] = 0;
		jin++;
	}
	if (!checkbase(base) || jin < 3)
		return (0);
	jin = 0;
	while (base[jin] != 0)
		jin++;
	ft_atoi(str, base, arr, jin); ///////////// arr[b] (f)
	result = ft_1toa(arr, base, jin, result); // arr --> 123
	return (result);
}

int		ft_1toa(char *arr, char *base, int jin, int result) // abc(f) --> 123
{
	int		i;
	int		c;
	int		j;

	i = 0;
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
		result = result * jin + c;
		i++;
	}
	arr[0] == '-' ? result = result * (-1) : result;
	return (result);
}

void	ft_atoi(char *str, char *base, char *arr, int jin) // arr[](f)
{
	int		i;
	int		j;
	int		k;
	int		mi[1];

	mi[0] = 1;
	i = 0;
	i = check(str, i, mi);
	j = 0;
	if (mi[0] < 0)
		arr[j++] = '-';
	while (str[i] != 0)
	{
		k = 0;
		while (k++ < jin)
			if (str[i] == base[k])
				arr[j++] = base[k];
		i++;
	}
}

int		check(char *str, int i, int *mi)
{
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mi[0] = mi[0] * (-1);
		i++;
	}
	return (i);
}
