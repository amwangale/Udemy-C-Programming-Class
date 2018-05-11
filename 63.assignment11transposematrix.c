//program to transpose m*n matrix

#include <stdio.h>

{
	int i, j, r, c;;
	int matrix[7][7];
	printf("Enter number of rows for the matrix (>=3 and <=10:)");
	scanf("%d", r);
	if(r <= 2 ||  r >= 11)
	{
		printf("Invalid number of rows, acceptable is >=3 and <=10");
		break;
	}
	while(r >= 3 && r <= 10)
	{
		printf("Enter number of columns for the matrix (>=3 and <=10): ");
		scanf("%d", &c);
		if(c <= 2 || c >= 11)
		{
			printf("Invalid number of columns, acceptable is >=3 and <=10");
			break;	
		}
		else
		printf
//matrix as given by you
//transpose of the matrix	
