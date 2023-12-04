#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Taking size for dynamically memory allocation
    char *takeChar = NULL;
    int sizeAlloc;
    printf("Enter the size of bytes you need to have: ");
    scanf("%d", &sizeAlloc);
    // Initializing a pointer with NULL values, which points to the HEAP
    takeChar = malloc(sizeAlloc * sizeof(char));
    printf("Now give the characters you want: ");
    for (int i = 0; i < sizeAlloc; i++)
    {
        char charTaking;
        scanf("%c", &charTaking);
        takeChar[i] = charTaking;// Scanned values will be stored in this pointer making an array
    }
    for (int i = 0; i < sizeAlloc; i++)
    {
        char charTaking;
        printf("%c", takeChar[i]);
    }

    free(takeChar);
    return 0;
}