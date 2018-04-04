#include <stdio.h>
int main()
{
	float a, b, c;
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);
	printf("Enter third number: ");
	scanf("%f", &c);
	float result = ((float) a + b + c) / 3;
	printf("Average is: %f", result);
	return 0;
}
