#include <stdio.h>
int main()
{
	printf("%d\n", printf("Hello") == printf("Hello"));
	printf("%d\n", printf("Angel") != printf("Daemon"));
	return 0;
}
