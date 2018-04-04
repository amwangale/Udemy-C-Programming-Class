#include <stdio.h>
int main ()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	switch(age)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19: printf("Teenage\n");
				 break;
		default: printf("Not teenage\n");
	}
	return 0;
}
