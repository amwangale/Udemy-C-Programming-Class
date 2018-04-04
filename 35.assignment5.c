#include <stdio.h>
#include <math.h>
int main()
{
	int quit = 0;
	int n; //n is the number for which you will find facotrial
	int factorial; //keep the factorial of n in p
	double base, exp; // for a^b

	int option; // for keepiing the menu option
	while(!quit)
	{
		printf("MENU\n");
		printf("1.Find factorial\n");
		printf("2.Find a^b\n");
		printf("3.Quit\n");
		printf("What do you want to do? \n");
		scanf("%d", &option);
		if(option == 3)
			quit = 1;
		else if(option == 1)
		{
			printf("Enter number: \n");
			scanf("%d", &n);
			
			if (n < 0)
				printf("Invalid number for factorial\n");
			else if (n > 10)
				printf("This program can find factorials in the range 0 - 10\n");
			else
			{
				int i = 1;
				factorial = 1;
				while (i <= n)
				{

					factorial *= i++;
				}
				printf("Factorial of %d is %d\n", n, factorial);
			}
		}
		else if(option == 2)
			{
				printf("Enter base a: \n");
				scanf("%lf", &base);
				printf("Enter base b: \n");
				scanf("%lf", &exp);
				printf("%.2lf^%.2lf = %.2lf\n", base, exp, pow(base, exp));
			}
		else
			printf("Invalid menu option\n");
		}
		printf("THANK YOU\n");
		return 0;
}
