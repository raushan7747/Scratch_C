// continue; keyword -> how works in loops

#include <stdio.h>
int main()
{

    int to_be_check = 7; // declaration for the value ->
                         // that needs to be check the condtion to continue the loop

    int i; // declaration of i

    while (i < 10) // initial condition,  which checks the first
    {
        i++;                  // if the value passes the parameters, then icrement
        if (i != to_be_check) // checking the condition to forward above
                              // if the condition is true then execute the code in this "if" block
                              // But, here's the condition is not (!), which means that ->
                              // if "i" is not equal to the 7, such as 0 is not eqal to 7 so, 
                              // the "if" condition is true, and in the if condition we give the
                              // command to be execute is, to continue from "while" condition
                              // now "while" check the value of i is less than 10(or not) 
                              // if i = 1, it means satisfies the condition and the next code to be ->
                              // executed, so i++ increase the value, send to the "if" condition to ->
                              // to check, 1 is not equal to 7 (or not), we knew that 1 is not equal ->
                              // 7, then "if" will execute the code under "if" code-block, which is ->
                              // continue;
                              // and the while loop works so on increase the value of i continuosly
                              // at a time i = 7, it means that, if we look at the condition under "if"
                              // then it becomes "FALSE" (which is, we knew that -> "7 is not equal to 7" is FALSE)
                              //if the condition of "if" is FALSE, then it will execute the "else" condition
                              // and under the "else" condition is to print the value of i, which is now 7.
        {
            continue;
        }
        else
        {
            printf("%d", i); // Execute if and only if the "if" condtion is false
        }
    }

    return 0;
} // } int main()
