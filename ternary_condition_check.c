#include <stdio.h>
int main()
{
    int Number;
    printf("We are checking the conditions through ternary operators\n");

    printf("Enter the age: ");
    scanf("%d", &Number);

    (Number >= 18) ? printf("This is under the Majorities ") : printf("This is the minorities");
    
    return 0;
}