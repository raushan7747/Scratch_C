// Increment operator and Decrement operator
#include <stdio.h>
// icrement operator
// i++ (Post increment) & ++i (Pre increment)

int main()
{
    int i =2;
    printf("Here's this will print the value for i, then after increase the value\n");
    
    printf("%d\n", i++); //use, then increase the value of increase of i
    
    printf("%d\n", i); // when we skip this step, then the value of i will stop printout
    // but it stores the increment value of i, where we can use or not
    
    printf("Now this will increase first then after print the value of i\n");
    
    printf("%d\n", ++i); //first increase the value after then print the value for i
    printf("%d\n", i);  // when we skip this step, then the value of i will stop printout
    // but it stores the increment value of i, where we can use or not
    
    
    // decrement operator
    // i-- (Post decrement) & --i (Pre decrement)
    
    int z = 10;
    printf(" Here's this will print the value for i, then after decrease the value\n");
    
    printf("%d\n", z--); //use, then decrease the value of increase of i
    printf("%d\n", z); // when we skip this step, then the value of i will stop printout
    // but it stores the decrement value of i, where we can use or not
    
    printf(" Now this will decrease the value first then after print the vlaue for i\n");
    
    printf("%d\n", --z); //first decrease the value after then print the value for i
    printf("%d\n", z); // when we skip this step, then the value of i will stop printout
    // but it stores the decrement value of i, where we can use or not
    
    
     //icrement operator for characters
    
    printf(" Here's the increament of characters will print\n");
    

        for(char ch='a'; ch<='z'; ++ch)
        {
            printf("%c\n", ch);
        }
    
    
   return 0;
}

