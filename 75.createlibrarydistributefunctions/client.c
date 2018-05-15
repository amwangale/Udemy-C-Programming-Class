#include <stdio.h>//we need to include the header files so a warning/error isnt generated
#include "headers/area.h"//header files contain protottypes for the functions
#include "headers/interest.h"

int main()
{
	double interest;
	interest = getsimpleinterest(10000.00, 10.0, 5.00);//program calling getsimpleinterest function
	printf("Interest is: %lf\n", interest);
	
	double t_area = gettrianglearea(5.0, 7.5);//calling functions included in the library
	double c_area = getcirclearea(5.5);

	printf("Area of the triangle: %lf\n", t_area);
	printf("Area of the circle: %lf\n", c_area);
	
	return 0;
}

//if you use include followed by angled brackets, compiler searches the include folder for the stdio library
//if you use quotes however, put the whole path so that the compiler can find the declarations within your header file
