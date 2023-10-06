#include <stdio.h>
int main()
{
    int num = 0; // initialization of do-while Loop

    do // do -while loop
    {
        printf("This is the first execution %d\n", num); // at this place, we can execute anything
        printf("This is the first execution %d\n", num); // whatever we want to be execute once
        // printf("This is the first execution\n", num);
        // printf("This is the first execution\n", num);
        // printf("This is the first execution\n", num);
        // printf("This is the first execution\n", num);
        int i = 0; // initialization for the while loop, and also it can be used as declaration
        while (i < 5)
        { // while loop execution block starts from here
            printf("\nPlaying a game 5 times only", i + 1);
            i++; // the work,  what we want changes in each execution
        }

        num++;                       // iteration incriment
                                     /*
                                      * under the "do", we can execute anything and also we can here
                                      * put the overall codes, else where -> like in an another loop
                                      * first check the condition and then code will executed.
                                      *
                                      * "do" ik aisa block of code hai jiske andar hum kuchh bhi
                                      * kam se kam 1 baar execute karwa sakte hain, bina koi
                                      * condition check kiye.
                                      *
                                      * Example-> agar humne koi game banaya ho jise hum user ko bas kuchh time
                                      * jaise ki 1 time or limited period tak user ko use karne dena chahte hain
                                      * to uske liye hum apna poora code "do" ke andar rakh sakte hain aur
                                      * jab uska trial period khatam hoga, humara code aage exeute karna shuru hoga
                                      * aur uske baad condition check karne ke baad hi user humare us product ko
                                      * use kar payega.
                                      *
                                      * AGAR hum user ko bas 3 baar apna product use karne dena chahte hain to hum
                                      * apne code ko bas loop ki help se 3 baar hi aceess karenge, "do" code-block
                                      * ke andar, aur jab "do" code-block ka execution khatam hoga to humara code
                                      * while tak pahunchega aur Humare condition ko follow karega jisme hum apna
                                      * condition de sakte ki ab aage user ko use karne dena hai ya nhi.
                                      */
        for (int n = 0; n < 10; n++) // for-loop, counts starts from 0 not 1
        {
            printf("%d\n", n + 1); // but here's we add +1 in the n that's why this will print (n+1)
                                   // (n+1) = (0+1) -> from initializing stage and also will add so on
        }

    } while (num < 11); // after execution above, check while the condition is true or false

    return 0;
} // } main()