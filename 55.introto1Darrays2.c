#include <stdio.h>

int main()
{
	int x[100], i;
	
	i = 0;
	while (i < 100)
	{
		x[i] = i + 1;
		i++;
	}
	printf("Content of the array: ");
	for (i = 0; i < 100; i++)
		printf("%d,", x[i]);
	return 0;
}
