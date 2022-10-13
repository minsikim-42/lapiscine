#include <unistd.h>

void	printbits(char c)
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

int		main(){
	char	c;
	c = 32;
	printbits(c);
	//revbits(c);
	return (0);
}
