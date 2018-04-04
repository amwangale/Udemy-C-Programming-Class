#include <stdio.h>
int main()
{
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if(year % 4 == 0)
	{
		if(year % 100 == 0)
			if(year % 400 == 0)
				printf("Yes it is a leap year\n");
			else
				printf("No it is not a leap year\n");
		else
			printf("Yes it is a leap year\n");
	}
	else
		printf("No it is not a leap year\n");
	return 0;
}
