// Strings are not allowed in the decision-making, only Characters, Integers are valid.

#include <stdio.h>
int main()
{
    char Name[100];
    printf("We are checking the conditions through ternary operators\n");

    printf("Enter your Name: ");
    scanf("%s", &Name);

    // this statement prints the "TRUTH" statement, which is first statement
    (Name != "Raushan") ? printf("This is under the Majorities %s\n ", Name) : printf("This is the minorities %s", Name);

    printf("Enter your Name: ");
    scanf("%s", &Name);
    (Name == "Raushan") ? printf("\nThis is under the Majorities %s ", Name) : printf("This is the minorities %s", Name);
    // this statement prints the "FALSE" statement, which is second statement
    return 0;
}