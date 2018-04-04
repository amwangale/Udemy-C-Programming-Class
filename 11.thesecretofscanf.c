#include <stdio.h>
int main()
{
	int x, y, i;
	printf("Enter two integers: ");
	i = scanf("%d %d", &x, &y);
	printf("x = %d, y = %d, i =%D\n", x, y, i);
	return 0;
}
