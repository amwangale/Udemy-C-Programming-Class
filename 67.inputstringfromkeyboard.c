#include <stdio.h>
int main()
{

	char	str[80];
	char	str2[80];
//	printf("Enter your name: ");
//	scanf("%s", str); //takes string but terminates if you put space
//	printf("Welcome %s\n", str);
	printf("Enter your name: ");
	scanf("%[^\n]", str2); //accepts anything typed from keyboard except a newline/ can use even ^A terminates if encounters A
	printf("Welcome %s\n", str2);
	return 0;
}
