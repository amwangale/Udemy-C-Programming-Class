#include <stdio.h>
int main() 
{
	int x[4][3]; //2D array with 4 rows and 3 columns
	int i, j; //row index i and column index j
	for(i = 0; i < 4; i++) //nested for loop to iterat through cells of 2D array
	{ //iterate through rows
		for(j = 0; j < 3; j++) //iterate through columns
		{
			x[i][j] = i * j; //assign i multiply through j
		} //eg 0* 0 = 0, 0 * 1 = 0, 0
	}
	printf("Content of the 2D array: \n");
	for(i = 0; i < 4; i++) 
    {
        for(j = 0; j < 3; j++)
        { 
			printf("%4d", x[i][j]); //print each element of each row.
		}//iterates through each j then iterates i
		printf("\n");//print new line after each row
	}
	printf("\n");
	return 0;
}
