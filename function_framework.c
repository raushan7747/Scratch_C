#include <stdio.h>
#include <string.h>
void Password_hidden(char *arr);

void main()
{
    char y_n[20];
    int i = 0;
    do
    {
        printf("\nthis is under do \n");
        i++;

        while (i <= 2) // It will ask the user for him/her permission
                       // If the user want to reject, the he/she must to be neglate twice as (i<2)
        {

            printf("Enter your answer\n");
            scanf("%s", y_n);
            i++;
        }

        Password_hidden(y_n);
    } while (i < 1);
}
void Password_hidden(char *arr)
{
    char Password_check[20];
    printf("Enter the Password for your next Step Verification\n");
    scanf("%d", Password_check);
    if (strcmp(Password_check, "Yes") == 0)
    {
        char Password_check[20];
        scanf("%s", Password_check);
        if (strcmp(Password_check, "Owner") == 0)
            printf("Congrates! You're sucessfully nearest to the Goal\n");
        // If the anser is "Yes" is corrrect than it will
        // -> will proceeed further, if ther is any futher
        // code exists then it will execute or Terminated
        // goto exit;
    }
}