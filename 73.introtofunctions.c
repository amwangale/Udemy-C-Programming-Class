//function that calcualtes the simple interest 
//on supplying the principal, duration and rate of interest
////returns interest found to the caller

#include <stdio.h>
//provide aname, opening brackets after name indicate a function
//provide {} for block containing instructions
//declare parameters and provide data type
double	getsimpleinterest(double principal, double rate, double time)
{
	double interest;//declare variable interest
	interest = (principal * rate * time) / 100.0;//process the data
	return interest;//return result to column AND THEN
}//use return data type to declare data type of function name

int main()
{
	double p, r, t, i;//declare four corresponding variables in main
	printf("Enter principal: ");//use these for input
	scanf("%lf", &p);
	printf("Enter rate of interest: ");
	scanf("%lf", &r);
	printf("Enter duration: ");
	scanf("%lf", &t);

	i = getsimpleinterest(p, r, t); //call the function and pass three parameters (from newly declared variables here) they will be copied to corresponding formal arguments
	printf("Total interest: $%0.2lf\n", i);

	i = getsimpleinterest(1000.0, 5.0, 2.0); //we can even hardcode values instead of rewriting the code
	printf("Total interest: $%0.2lf\n", i);
	return 0;
}
