//function that finds the simple interest on supplying principal. rate of interest and time

double getsimpleinterest(double principal, double rate, double time)
{
	double interest;
	interest = (principal * rate * time)/100.0;
	return interest;
}
