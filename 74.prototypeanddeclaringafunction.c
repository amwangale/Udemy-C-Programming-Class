#include <stdio.h>//compiler starts compiling here. known as header file. # instruction
//tells compiler to include stdio.h before compiling
//known as preprocessor directives
//stdio.h contains prototype declarations of all library functions involved eg printf
//compiler find the definition of the function and compiles it

double	getsimpleinterest(double, double, double);//the prototype is a hint to the compiler
//about what the function receives and returns; we decalre using data type, name of the 
//function and data type of parameters

int main(){
	double i;

	i = getsimpleinterest(1000.0, 5.0, 2);//when it encounters the call in main 
	//it understands because of delcaration
	printf("Total Interest: $%0.2lf\n", i);

	return 0;
}
//below is a function definition, the compier encounters it after the main hence the prototype
double getsimpleinterest(double principal, double rate, double time)
{
	double interest;
	interest = (principal * rate * time)/100.0;
	return interest;
}
