#include <stdio.h>
int main()
{
	int a = 5, b = 5, i, k;
	i = a++;
	k = ++b;
	printf("a = %d, i = %d, b = %d, k = %d\n", a, i, b, k);
	return 0;
}
