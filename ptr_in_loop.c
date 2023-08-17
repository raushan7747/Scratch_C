// array -> pointers
#include <stdio.h>
int main()
{
    int Num = 0;
    int *num = &Num;

    printf("%d", num);
    printf("\n%d\n", num + 1);

    printf("Size of double in your system\n%d", sizeof (double));

    for (int i = 0; i < 2; i++)
    {
        printf("\nthis is under loop \n%d", i, Num);
    }

    // printf("\n%d\n", *num);

    return 0;
}