//initialize one dimensional array with n randomly generated integers then finding 
//the sum and the average

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	printf("Enter number of elements: ");//taking value of n from the keyboard
	scanf("%d", &n);
	int x[n];//declare the array with n elements
	int i;

	srand(time(NULL)); //initialize seed to get random numbers on each execution
	for (i = 0; i < n; i++) //for loop to assign rando number to corresponding elements
		x[i] = rand() % 100; //ith elemnt. rand function to get two digit random numbers 0 - 99
	printf("Content of the array: \n"); //print the content of the array
	int sum = 0; //declare sum and initialize with zero to do away with garbage values
	for(i = 0; i < n; i++) //for loop to iterate through array elemenrs from i = 0
	{
		printf("%4d", x[i]); //4d is width of number. reserves four character columns
		sum = sum + x[i];// accumulating ith element of x array with the sum variable
	}
	printf("\n\n");
	printf("Sum is %d\n", sum); //summation of all these variables and prints sum
	double average = (double)sum / n; //declare the average as a double variable and cast the sum to
	//get an integer
	printf("Average of the numbers: %lf", average);
	return 0;
}
