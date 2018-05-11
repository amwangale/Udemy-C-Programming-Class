#include <stdio.h>

int main()
{
	int r, c;//r is number of salesperson, c is number of items
	//input for r and c
	printf("Enter number of salesperson: ");
	scanf("%d", &r);
	printf("Enter number of items: ");
	scanf("%d", &c);
	printf("\n\n\n");
	//swclare 2D array, rows for salesperson, columns for items
	double saleData[r][c];
	//input sales data into the array
	printf("Enter sale data: \n\n");
	int i, j;
	for(i = 0; i < r; i++){ //for every row we iterate through the columns
		for(j = 0; j < c; j++){
			printf("Sale amount for salesperson no. %d and item no %d: ", i+1, j+1); //add one so it doesn't start from zero
			scanf("%lf", &saleData[i][j]);
		}
	}
	//print report section
	printf("-----------------------------------------------\n");
	printf("Sale data\n");
	printf("-----------------------------------------------\n\n");
	double total = 0.0; //accumulate total sales for each salesperson
	double comm;
	for(i = 0; i < r; i++){
		printf("Sale data for salesperson no. %d\n", i+1);
		printf("-----------------------------------------------\n");
		total = 0.0;//iitialize total to zero again otherwise garbage values or adds from previous salesperson
		for(j = 0; j < c; j++){
			printf("\tItem %d:	$%0.2lf\n", j+1, saleData[i][j]);
			total += saleData[i][j];
		}
		printf("\tTotal : $%0.2lf\n", total);
		comm = 0.1 * total;//print 10% commision
		printf("\tComm : $%0.2lf\n", comm);
		printf("\n\n");
	}
	return 0;
}
