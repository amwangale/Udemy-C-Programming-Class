/*does not evluate right hand operand if left hand operand has already proven itself to be false in an AND operation*/
#include <stdio.h>
int main()
{
	int a = -1, b = 10, c;
	c = ++a && ++b;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	return 0;
}
