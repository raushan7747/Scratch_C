#include <stdio.h>
int main()
{

    int i = 0;
    while (i < 5)
    {

        if (i > 0)
        {
            int i = 1;

            for (int i = 0; i < 10; i++)
            {
                printf("\n%2d ", i + 1);
                printf("This will exceed the limits: \n");
            }
            // break;
            // continue;
            // printf("This will exceed the limits: \n");
        }

        if (i < 3)
        {
            int i = 1;

            for (int i = 0; i < 5; i++)
            {
                printf("\n%2d ", i + 1);
                printf("This will be under the 5 times\n");
            }

            // printf("This will be under the 5 times\n");
        }

        printf("\nRaushan\n");
        i++;
    }
    return 0;
}