#include <unistd.h>

int	main()
{
	int	i = 0;
	int j = 0;
	while(i < 99)
	{
		while(j < 9)
		{
			write(1, &j, sizeof(j));
			j++;
		}
		i++;
	}
	return 0;
}
