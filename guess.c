#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // a game to guess a number
    //  Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 101;
    int guess;
    int no_of_guess=0;
    do
    {
        // To take the number from user
        printf("Guess the number \n");
        scanf("%d", &guess);
        if (guess < randomNumber)
        {
            printf("Higher number please \n");
        }
        else if (guess > randomNumber)

        {
            printf("Lower number please\n");
        }
        else
        {
            printf("Congrats!!! \n");
        }

        no_of_guess=no_of_guess+1;
    } while (randomNumber != guess);
    // printing thwe number of guesses user took
    printf("You guessed the number in %d tries  \n", no_of_guess);
    return 0;
}
