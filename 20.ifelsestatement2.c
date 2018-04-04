#include <stdio.h>
int main(int argc, char **argv)
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age >= 13 && age <= 19)
		printf("Yup! your are a teenager!");
	else
		printf("Nope! you are not a teenager!");
	return 0;
}
