//program that finds the sum of first n natural numbers
#include <stdio.h>
int main()
{
	int n, sum, i;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(i = 1, sum = 0; i <= n; sum += i, i++); //use semicolon because for loop has all details
	printf("The sum is %d\n", sum);
	return 0;
}
