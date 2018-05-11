#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	printf("Enter a string: ");
	scanf("%[^\n]", str);

	//int i = 0;
	//while(str[i])
	//	i++;
	int i;
	i = strlen(str);
	printf("The length of the string is %d\n", i);
	return 0;
}
