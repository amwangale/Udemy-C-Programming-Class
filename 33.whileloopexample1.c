#include <stdio.h>
int main()
{
	int n, sum, i;
	printf("Enter n: ");
	scanf("%d", &n);

	sum = 0;
	i = 1;
	while(i <= n)
	{
		sum += i++;
	}
	printf("Sum of first %d natural numbers = %d\n", n, sum);
	return 0;
}
