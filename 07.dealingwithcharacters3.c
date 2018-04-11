#include <stdio.h>

int main() {
	char ch;
	printf("Enter an alphabetic character: ");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z'){
		ch += 32;
		printf ("The corresponding lowercase letter is: %c\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z') {
		ch -=32;
		printf ("The corresponding uppercase letter is: %c\n", ch);
	}
	else{
		printf("The given character is not alphabetic\n");
	}
	return 0;
}
