#include <unistd.h>

unsigned char reverse_bits(unsigned char b)
{
	b = b >> 4 | b << 4;
	b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
	b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
	return b;
}

void	printbits(unsigned char c)
{
	int		i;
	int		j;

	i = 128;
	j = c;
	while (i != 0)
	{
		if (j >= i)
		{
			write(1, "1", 1);
			j = j - i;
		}
		else if (j < i)
			write(1, "0", 1);
		i = i / 2;
	}
}

int	main(void)
{
	unsigned char c;

	c = 99;
	printbits(c);
	write(1, "\n", 1);
	c = reverse_bits(c);
	printbits(c);
	return (0);
}
