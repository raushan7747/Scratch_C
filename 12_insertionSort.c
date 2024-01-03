#include <stdio.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("\n");
}

void insertionSort(int *array, int size)
{
    // for the passes
    int i, j, keyValue; // j is supposed to be the index of sorted array
    for (int i = 1; i <= size - 1; i++)
    {
        // we need to start shifting elements from the second-element
        keyValue = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > keyValue)
        {
            array[j + 1] = array[j];
            j--;
            array[j + 1] = keyValue;
        }
    }
}
int main()
{
    int array[] = {23233, 4, 55444, 664545, 4};
    printArray(array, 5);
    insertionSort(array, 5);
    printArray(array, 5);
    return 0;
}