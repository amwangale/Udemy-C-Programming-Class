#include <stdio.h>
int main()
{
	int units;
	double bill_amount;
	printf("Welcome to the ABC Power Supply Company\n");
	printf("Input Unit Consumed: ");
	scanf("%d", &units);
	if (units < 0)
		printf("Units cannot be negative\n");
	else if(units <= 100){
		bill_amount = units * 0.2;
		printf("Total bill: $%0.2lf for %d\n", bill_amount, units);
	}
	else if(units >  100 && units <= 250){
        bill_amount = (100 * 0.2) + ((units - 100) * 0.5);
        printf("Total bill: $%0.2lf for %d\n", bill_amount, units);
    }
	else if(units > 250 && units <= 500){
        bill_amount = (100 * 0.2) + (150 * 0.5) + ((units - 250) * 0.75);
        printf("Total bill: $%0.2lf for %d\n", bill_amount, units);
    } 
	else if(units >  500){
        bill_amount = (100 * 0.2) + (150 * 0.5) + (250 * 0.75) + ((units - 500) * 1);
        printf("Total bill: $%0.2lf for %d\n", bill_amount, units);
    }
	return 0;
}
