/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 04:19:41 by minsikim          #+#    #+#             */
/*   Updated: 2020/11/25 18:51:31 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	chnum1(int c, int n);
int		len1(int a);

void	ft_putnbr(int nb)
{
	int		num;
	int		count;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		write(1, "147483648", 9);
		return;
	}
	num = nb;
	count = len1(num);
	chnum1(count, num);
}

void	chnum1(int c, int n)
{
	char	chn[c];
	int		i;
	int		n1;
	int		mi;

	if (n < 0)
	{
		n = n * (-1);
		mi = 1;
	}
	i = -1;
	while (++i <= c)
	{
		n1 = n % 10 + '0';
		chn[c - i - 1] = n1;
		n = n / 10;
	}
	if(mi == 1)
		write(1, "-", 1);
	write(1, chn, sizeof(chn));
}

int		len1(int a)
{
	int		b;

	if (a < 0)
		a = a * (-1);
	b = 0;
	while (a > 0)
	{
		a = a / 10;
		b++;
	}
	return (b);
}

int		main()
{
	ft_putnbr(-2147483648);
	return 0;
}
