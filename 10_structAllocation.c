/* If we're using ADT-members in the main() function, then we must allocate the memory for ADT
 * for example- struct stack *stackArray = (struct stack*)malloc(sizeof(struct stack));
 */
#include <stdio.h>
#include <stdlib.h>

// Creating ADT, structure of STACK
struct stack
{
    int size;
    int topValue;
    char *array;
};

int main()
{
    struct stack *stackObject = (struct stack *)malloc(sizeof(struct stack));
    printf("The size of an Object of struct stack is: %d\n", sizeof(stackObject));
    char c2 = 'K';
    char *character;
    character = &c2;

    stackObject->size = 10;
    stackObject->topValue = -1;
    stackObject->array = (char *)malloc(stackObject->size * sizeof(char));
    for (int i = 0; i < stackObject->size; i++)
    {
        stackObject->topValue++;
        stackObject->array[stackObject->topValue] = (*character);
    }
    printf("The value is: %c\n", stackObject->array[stackObject->topValue]);

    // making free allocated memory
    free(stackObject->array);
    free(stackObject);
    return 0;
}
// /* If we are'nt using ADT-members in the main() function, then we can/can't allocate the memory for ADT, but here's we must
//  * to be declare an object of struct stack. for example- struct stack *stackArray; [ in main() function ]
//  */
// #include <stdio.h>
// #include <stdlib.h>

// // Creating ADT, structure of STACK
// struct stack
// {
//     int size;
//     int topValue;
//     char *array;
// };
// // creating an array using Stack-structures and features
// void array(struct stack *stackObject, char *character)
// {
//     stackObject->size = 10;
//     stackObject->topValue = -1;
//     stackObject->array = (char *)malloc(stackObject->size * sizeof(char));
//     for (int i = 0; i < stackObject->size; i++)
//     {
//         stackObject->topValue++;
//         stackObject->array[stackObject->topValue] = (*character);
//     }
//     printf("The value is: %c\n", stackObject->array[stackObject->topValue]);
// }
// int main()
// {
//     struct stack *stackObject;
//     printf("The size of an Object of struct stack is: %d\n", sizeof(stackObject));
//     // struct stack *stackObject = (struct stack*)malloc(sizeof(struct stack));
//     char c2 = 'R';
//     char *character;
//     character = &c2;
//     // // parenthesis matching
//     array(stackObject, character);
//     // // making free allocated memory
//     free(stackObject->array);
//     free(stackObject);
//     return 0;
// }