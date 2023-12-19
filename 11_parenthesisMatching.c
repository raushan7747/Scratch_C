#include <stdio.h>
#include <stdlib.h>

// Creating ADT, structure of STACK
struct stack
{
    int size;
    int topValue;
    char *array;
};

// creating an array object using ADT
void array(struct stack *stackObject, char userExpression[])
{
    stackObject->size = 11;
    stackObject->topValue = -1;
    stackObject->array = (char *)malloc(stackObject->size * sizeof(char));
    for (int i = 0; i < stackObject->size - 1; i++)
    {
        stackObject->topValue++;
        stackObject->array[i] = userExpression[i];
    }
    for (int i = 0; i < stackObject->size - 1; i++)
    {
        printf("%c", stackObject->array[i]);
    }
}
int main()
{
    // struct stack *stackObject = (struct stack *)malloc(sizeof(struct stack));
    struct stack *stackObject;
    char userExpression[11];
    printf("Enter: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &userExpression[i]);
    }
    userExpression[10] = '\0';
    array(stackObject, userExpression);
    // making free allocated memory
    free(stackObject->array);
    free(stackObject);
    return 0;
}