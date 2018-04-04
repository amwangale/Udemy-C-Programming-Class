#include <stdio.h>
int main()
{
	int age;
	char response;

	do {

		printf("Enter age: ");
		scanf("%d", &age);

		if (age >= 13 && age <= 19)
		printf("Teenage\n");
		else
		printf("Not teenage\n");
		
		printf("Do you want to continue? (y/n): ");
		scanf(" %c", &response);
	} while(response == 'y' || response == 'Y');
	return 0;
}
