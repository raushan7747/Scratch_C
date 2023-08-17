// To print any random number depends on time as 0 seconds or more

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int random_number;
    srand(time(0));               // "srand" function is used to define the delay between random numbers
                                  // "(time(0))" function define the delay time betwween the random numbers -->
                                  // which is "0" second.
    random_number = rand() % 100; // Using "rand()" function, randomly prints the number
                                  //  Random number is divided by 100 and "Remainder" will be Output

    printf("The random number is %2d\n", random_number);
    return 0;
}