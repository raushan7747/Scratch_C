#include <stdio.h>
// traversing all-elements of an array
void arrayTraversal(int array[], int sizeArray)
{
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}
// array insertion
void insertAtFirst(int array[], int arraySize, int index, int element)
{
    int lastIndex = arraySize - 1;                       // lastIndex = 8
    for (int lastIndex; index <= lastIndex; lastIndex--) // if index is greater than 8, then we just put value, and for loop will terminated
    {
        array[lastIndex + 1] = array[lastIndex];
        // array[lastIndex + 1] (this one works like variable, as where we store values) = array[lastIndex] (this one is the value that is to be stored in the array[lasIndex + 1]);
        // LEFT always variable and RIGHT are always vlaues
    }
    array[index] = element;
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9, index = 9, element = 11;
    arrayTraversal(array, size);
    insertAtFirst(array, size, index, element);
    size += 1;
    arrayTraversal(array, size);
    return 0;
}