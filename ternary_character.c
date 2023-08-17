#include <stdio.h>
int main()
{
    char Name;
    printf("We are checking the conditions through ternary operators\n");

    printf("Enter the age: ");
    scanf("%c", &Name);

    (Name == 'R') ? printf("This is under the Majorities %c ", Name) : printf("This is the minorities");
    
    return 0;
}