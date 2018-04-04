#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	age >= 13 && age <= 19 ? printf("Yes the age is teenage") : printf("No not teenage");
	return 0;
}
