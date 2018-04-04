#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main(){
  printf("***********************************************************\n");
  printf("**----------------Welcome to Guessing Game---------------**\n");
  printf("**---------You can guess if you understand the MATH -----**\n");
  printf("**---------------------------------------------------------\n");
  printf("\n\n");

  // a constant, to hold the Maximum possible chances
  // a const is a named memory whose content cannot be changed through out the program,
  // if you try to modify the content of the constant then it results into a
  // compilation error.
  const int MAX_CHANCES = 7;
  int computer_guess;  // for storing the guess by this program.
  long seed = time(NULL);  // get the current system time that we will use as seed
  srand(seed); // set the seed using the srand function
  computer_guess = rand() % 100; // let your program guess a 2 digit number

  // Prompt the user
  printf("Program has guessed a number, what you need to do is match it.\n");
  printf("Remember, you have only 7 chances.\n");
  printf("Best wishes...\n\n");

  int user_guess; // to store the input from user.
  int chance_count = 1; // to store chance number, maximum is MAX_CHANCES(7)
  int match = 0;        // if user successfully guessed the number, then assign 1 to this variable
                        // initially it is 0 as user yet to find the number.
  // iterate in a loop, as long as not found and chance_count <= MAX_CHANCES
  // Instruction: Offcourse, it is your task to write the condition for the while loop
  while(match == 0 && chance_count <= 7)/*as long as match is false and chances are <= MAX_CHANCES*/
  {
    printf("Enter your number: "); // prompt the user to enter their guess.
    scanf("%d", &user_guess);// get that input in user_guess
    // if the user_guess is greater than the computer_guess, then print "Your guess is high",
    // also print, number of steps remaining.
    if (user_guess > computer_guess)
    {
      printf("Your guess is high\n");
      printf("Number of remaining chances: %d\n", (MAX_CHANCES - chance_count));// write a printf to print the remaining chancess
    }
    // other wise if the user_guess is less than the computer_guess then, print "Your guess is low"
    // also print number of steps remaining.
    else if(user_guess < computer_guess)
    {
      printf("Your guess is low \n");
      printf("Number of remaining chances: %d\n", (MAX_CHANCES - chance_count));// write a printf to print the remaining chances
    }
    // if they match, print "Bingo!! You have won the game.", also print number
    // of steps that the user took to find the number. You need to do something
    // to come out of the loop as the user found the number, do that here.
	else{
     printf("Bingo!! You got it correct %d is the number.\n", user_guess); // You will be here only if the user input matches
     printf("You guessed that in %d chances\n", chance_count);// with the number guessed by your program.
      // complete this section...                     // 20 marks
    }
    printf("\n\n");
    chance_count++;  // increment the chance_count for the next iteration.
  } // end of while

  // you can be out of the above loop in either of 2 cases, when the user guessed
  // the number correctly or they have failed to guess that in all 7 steps.
  // For the second case you need to print "Game Over" message.
  // if not match, then print "Game over!!! Try to be Mathemetical."
  if (MAX_CHANCES > 7 || chance_count <= 7 && user_guess == computer_guess){           // 10 marks
    printf("Game Over");// print the game over message.                 // 5 marks
  }
  return 0;
}
