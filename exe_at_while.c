#include <stdio.h>
#include <string.h>
int main()
{
    char y_n[20];
    int i = 0;
    do
    {
        printf("\nthis is under do \n");
        i++;

        int i = 0;

        while (i < 1) // It will ask the user for him/her permission
                      // If the user want to reject, the he/she must to be neglate twice as (i<2)
        {

            printf("Enter your answer\n", y_n);
            scanf("%s", &y_n);
            i++;

            if (strcmp(y_n, "Yes") == 0)
            {
                printf("Congrates! You're sucessfully nearest to the Goal\n");
                // If the anser is "Yes" is corrrect than it will
                // -> will proceeed further, if ther is any futher
                // code exists then it will execute or Terminated
                // goto exit;
            }

            // if (strcmp(y_n, "RK") == 0)
            // {
            //     printf("Enter your Secret Locker Password ->\n");
            //     if (strcmp(y_n, "Yes") == 0)
            //     {
            //         scanf("%s", &y_n);
            //         printf("Your Facebook password is: ***raushanmandal***");
            //     }
            // }

            else
            {
                printf("This is last chance, please re-enter your password***\n");
                scanf("%d", &y_n);
                {
                    if (strcmp(y_n, "Yes") != 0)  // if (strcmp(y_n, "Yes") == 2)  --> to exe "else" only

                                                    /* If we want to execute the else statement in this->
                                                    code-block we must give an another condition -->
                                                    which don't same as above "if" statement
                                                    such as: this can be used to make different desecions
                                                    if (strcmp(y_n, "Yes") == 2)
                                                    */
                    {
                        printf("Please enter the correct password\n");
                    }

                    else            /*The lines start from here never will be executed beceause
                                        we already are in the "else" condition where the first ->
                                        condition is satisfied that if the string is "Yes", then 
                                        it will be proceed further.
                                        So, this line is not necesarrily it never executes anything
                                        and also don't give an error, -> it may also lead to 
                                        missguide the Programmer -->
                                        */
                    {

                        printf("Your Facebook password is: ***raushanmandal***"); //never executes
                    }
                }
            }
        }
    } while (i < 1);

    printf("Enter Password -->\n");
    scanf("%s", &y_n);
    if (strcmp(y_n, "RK") == 0)
    {
        printf("Enter your Secret Locker Password ->\n");
        scanf("%s", &y_n);
        if (strcmp(y_n, "Yes") == 0)
        {
            printf("Your Facebook password is: ***raushanmandal***");
        }
    }

    // this will run under the "do" {code-block}, which is only 1 time
    // exit:
    return 0;
}