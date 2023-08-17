// Arguments behaviour may vary on different compilers architecture

#include <stdio.h>
int main()
{
    int arguements;

    printf("Enter the value to check your arguements prescedence: ");
    scanf("%d", &arguements);

    // In "GCC: " compiler arguments prescedence is "Right to Left"
    // printf() function will prints first: arguments++, then after ++arguments and arguments at end;

    printf(" The value is: %2d\t %2d\t %2d\t", arguements, ++arguements, arguements++);

    // If we take arguement as 5 then it will print, 5 and increase the value(but don't print)
    // then after, argument value in compiler is 6, and then ++arguement will increase the value 
    // now, argument value is 7 (which is print to the console)
    // And, last one argument will print again the value of arguements(which is 7 in GCC compiler)
    return 0;
}