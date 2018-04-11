#include <stdio.h>

int main() {
	int x[100];
	x[0] = 10;
	x[99] = 2;

	printf("First element: %d\n", x[0]);
	printf("Last element: %d\n", x[99]);

	x[1] = x[0] + x[99];
	printf("Second element: %d\n", x[1]);
	return 0;
}
