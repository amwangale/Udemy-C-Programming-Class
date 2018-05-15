//function to calculate the area of a circle and return the result to the caller
//receives the radius as the input parameter

double getcirclearea(double rad)
{
	double area;
	area = 3.14 * rad * rad;
	return area;
}

//function to calculate area of a triangle and returns result to the caller
//function receives the base and the height as input parameter

double gettrianglearea(double base, double height)
{
	double area;
	area = 0.5 * base * height;
	return area;
}
