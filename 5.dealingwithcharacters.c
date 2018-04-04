#include <stdio.h>

int main() {
	char ch = 'A';
	printf("Character is %c\n", ch);
	printf("Enter a character: ");
	char another;
	/*scanf("%c", &another);*/
	another = getchar();
	printf("You have typed: %c\n", another);
	return 0;
}
