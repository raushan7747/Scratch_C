#include <stdio.h>
#include <stdlib.h>

void fileHandling(void);
int main()
{
    fileHandling();
    // fileHandling();
    return 0;
}

void fileHandling(void)
{
    FILE *sqlSyntax = NULL; // making NULL pointers is the best practice
    // Taking mode by user
    char mode[2];
    char dynamicFile[50]; // takes file name to open
    printf("\nEnter the mode in which you want to open a File: (w, a)\n");
    printf("\nkeep in your mind that, if you open a file in write mode using (w) then previous data will be Vanished(removed)\n");
    printf("\nIf you wanna to keep your previous data so please open the file in Append mode using (a): \n");
    scanf("%2s", mode);
    // dynamcilly file taking from user
    printf("Enter the file name in which you want to save your data: ");
    scanf("%s", dynamicFile); // taking file name
    sqlSyntax = fopen(dynamicFile, mode);
    if (sqlSyntax == NULL)
    {
        perror("File opening failed");
        return;
    }
    char *dynamicChar = NULL; // points to the HEAP for memory Allocation
    int sizeAlloc;
    printf("Enter the size of bytes you need to have: ");
    scanf("%d", &sizeAlloc);
    // Initializing a pointer with NULL values, which points to the HEAP
    dynamicChar = malloc((sizeAlloc + 1) * sizeof(char)); // +1 for storing the Null terminator
    printf("Now give the characters you want: ");
    for (int i = 0; i < sizeAlloc; i++)
    {
        char charTaking;
        scanf("%c", &charTaking);
        // scanf(" %c", &charTaking); // For consuming white-spaaces, means white spaces no to be count in bytes
        dynamicChar[i] = charTaking; // Scanned values will be stored in this pointer making an array
    }
    for (int i = 0; i < sizeAlloc; i++)
    {
        char charTaking;
        printf("%c", dynamicChar[i]);
    }
    dynamicChar[sizeAlloc] = '\0';
    fprintf(sqlSyntax, "%s", dynamicChar); // using (%S) specifier will print the whole characters into the file
    fprintf(sqlSyntax, "\n"); // prints next line in the file

    free(dynamicChar);
    fclose(sqlSyntax);

    printf("\n\n");
    return;
}