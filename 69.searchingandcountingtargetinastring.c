#include <stdio.h>

int main()
{
	char str[80];
	printf("Enter a string: ");
	scanf("%[^\n]", str);

	int i, countalpha = 0, countspace = 0;
	for(i = 0; str[i] != '\0'; i++){
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			countalpha++;
		else if (str[i] == ' ')
			countspace++;
	}
	printf("Total alphabet: %d \n", countalpha);
	printf("Total space: %d\n", countspace);
	return 0;
}
