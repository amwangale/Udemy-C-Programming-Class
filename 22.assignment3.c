#include <stdio.h>
int main()
{
	int neighbors;
	printf("How many neighbors does Pupeta have?: ");
	scanf("%d", &neighbors);
	if(neighbors == 0)
		printf("Pupeta is sad and will force you to listen to his story and will make you late");
	else if(neighbors == 1)
		printf("Pupeta will ask you to deliver one pizza to his only neighbor and you may be late");
	else if(neighbors >= 2 && neighbors <= 5)
		printf("Pupeta is in a great mood and will be singing a song and cracking jokes. You will get good tips");
	else if(neighbors == 7)
		printf("Pupeta will offer you a drink but will not give you a tip");
	else if(neighbors == 6 || neighbors == 7)
		printf("Pupeta is too angry and furious, deliver the pizza and leave ASAP");
	else
		printf("Invalid number of neighbors");
	return 0;
}
