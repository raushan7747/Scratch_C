// To print any random number depends on time as 0 seconds or more

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_number, user_guesses, user_attempts = 1;
    // it is the initializing stage for do-while (user_attempts = 1) and then increment to count attempts
    srand(time(0));               // "srand" function is used to define the delay between random numbers
                                  // "(time(0))" function define the delay time betwween the random numbers -->
                                  // which is "0" second.
    random_number = rand() % 100; // Using "rand()" function, randomly prints the number
                                  //  Random number is divided by 100 and "Remainder" will be Output

    printf("The random number is %2d\n", random_number);
    do
    {
        printf("Enter the Number to Guess between [1 to 100] only: \n");
        scanf("%d", &user_guesses);

        if (user_guesses < random_number)
        {
            printf("Random number is greater than your guess number\nEnter the Largest number: \n");
        }

        else if (user_guesses > random_number)
        {
            printf("Random number is less than your guess number\nEnter the smallest number: \n");
        }

        else
        {
            printf("You guess the number is %d in %d attemptts", random_number, user_attempts);
        }

        user_attempts++;

    } while (user_guesses != random_number);
    return 0;
}