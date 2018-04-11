#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dice1, dice2, computer_sum, user_sum;
	long seed;
	int total_correct = 0;
	int total_incorrect = 0;
	int score = 0;

	printf("Computer rolled two dice... Guess the sum\n");
	printf("Enter any value <= 0 to terminate\n\n");
	user_sum = 1;
	while (user_sum > 0)
	{
	  	printf("Enter your guess: \n");
		scanf("%d", &user_sum);
	  	seed = time(NULL);
		srand(seed);
	  
		dice1 = (rand() % 6) + 1;
	  	dice2 = (rand() % 6) + 1;
	  	computer_sum = dice1 + dice2;
		if(computer_sum == user_sum)
		{
			score += 10;
			printf("The computer guessed %d!\n\n", computer_sum);
			printf("Bravo! You were correct! +10\n");
			total_correct++;
			printf("Total correct: %d\n", total_correct);
			printf("Total_incorrect: %d\n", total_incorrect);
			printf("Score: %d\n\n", score);
		}
		else if(computer_sum != user_sum)
		{
			score -= 5;
			printf("The computer guessed %d!\n\n", computer_sum);
			printf("Darn!!! Bad attempt, -5\n");
			total_incorrect++;
            		printf("Total correct: %d\n", total_correct);
            		printf("Total_incorrect: %d\n", total_incorrect);
            		printf("Score: %d\n\n", score);
		}
	}	
	while (user_sum <= 0)
	{
		printf("Total correct: %d\n", total_correct);
        printf("Total_incorrect: %d\n", total_incorrect);
        printf("Score: %d\n", score);
		break;
	}
	printf("\n\n");
	printf("Thankyou for playing!\n");
		return 0;
}
