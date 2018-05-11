#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int i;
	float x[20];
	float sum1;
	float sum2;

	printf("Enter maximum 20 numbers, terminate with 0.0\n");
	for (i = 0; i < 20; i++)
	{	
		printf("x[%d] number: ", i);
		scanf("%f", &x[i]);
		if(x[i] == 0.0)
			break;
	}
	printf("\n\n");
	printf("There are %d total numbers give as input\n\n", i);
	
	char input[12] = "Input Array";
	char output[12] = "2nd Array\n\n";
	printf("%12s %24s", input, output);

	for(i = 0; i < 20; i++)
	{
		float cube;
		float dbl;

		dbl = (x[i] * 2);
		cube = (cbrt(x[i]));
		
		if(!(i % 2))
		{
			printf("%11f %24f\n", x[i], dbl);
			sum2 += dbl;
		}
		sum1 = sum1 + x[i];
		
		if (i % 2)
		{
			printf("%11f %24f\n", x[i], cube);
			sum2 += cube;
		}
	}
	printf("Sum of the first array: %5f\n", sum1);
	printf("Sum of the second array: %5f\n", sum2);
	return 0;
}
