#include <stdio.h>
int main() {
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("Yes %d is a leap year", year);
	else
		printf("No %d is not a leap year", year);
	return 0;
}
