#include <stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n); //ask user to enter the size of the array

	int x[n]; //array with n elements is dynamic
	int i;
	for(i = 0; i < n; i++) //use a for loop to ask the values of n number of elements
	{
		printf("Enter element to index %d: ", i);
		scanf("%d", &x[i]); //take element to index i
	}
	printf("Content of array: \n"); //print content of array i = 0 to i < n
	for(i = 0; i < n; i++)
		printf("x[%d] = %d\n", i, x[i]);
	return 0;
}
