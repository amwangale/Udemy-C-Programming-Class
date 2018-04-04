#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a > c)
		max = a;
	else if(b > c)
		max = b;
	else
		max = c;
	printf("Maixmum is %d\n", max);
	return 0;
}
