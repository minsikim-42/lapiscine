#include <unistd.h>

int main(){ // 1. arr[4][4] --> arr[0][i], 2. `char --> int --> char
	char a;
	int arr[4][4];
	char arr2[4][4];
	int i;

	i = 0, a = '0';
	while (i < 16)
	{
		arr[0][i] = a - '0';
		a++;
		i++;
	}
	i = 0;
	while (i < 16)
	{
		arr2[0][i] = arr[0][i] + '0';
		i++;
	}
	write(1, arr2, 16);
	return 0;
}
