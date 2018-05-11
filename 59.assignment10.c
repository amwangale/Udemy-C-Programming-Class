#include <stdio.h>

int main()
{
	int x[10] = {0,0,0,0,0,0,0,0,0,0};
	int n;
	int i;

	printf("Please note that you can input at most a 10 digit number\n");
	printf("What is the total number of digits in the number?");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Input next digit:  ");
		scanf("%d", &i);
	}
	return 0;
}
