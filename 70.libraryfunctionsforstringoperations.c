#include <stdio.h>
#include <string.h>

int main()
{
	char	first[80] = "Chocolate Candy";
	char	second[80];
	
	strcpy (second, first); //copies first string to second
	printf("Copied string: %s\n", second);

	char third[80] = "Chocolate";
	char fourth[80] = "Candy";
	strcat(third, " "); //append a space first
	strcat(third, fourth); //Everything will be merged into first array
	printf("The first array contains: %s\n", third);

	char fifth[80] = "hello";
	char sixth[80] = "help";
	int i;
	i = strcmp(fifth, sixth);
	if (i == 0) //if words are exactly the same
		printf("Both are exactly equal\n");
	else if (i < 0) //if fifth is earlier in dictionary than sixth
		printf("%s comes first\n", fifth);
	else //if fifth is later in the dictionary than sixth
		printf("%s comes first\n", sixth);

	return 0;
}
