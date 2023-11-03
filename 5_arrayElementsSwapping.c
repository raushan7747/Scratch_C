#include <stdio.h>
// array traversing
void arrayTraversing(int arrays[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d", arrays[i]);
        printf(" ");
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sizeOfArray = (sizeof(array) / sizeof(int));
    // traversing the array elements
    printf("Before swapping: ");
    arrayTraversing(array, sizeOfArray);
    printf("\n");
    printf("After swapping: ");
    // swapping algorithm's
    int swapsTime = sizeOfArray / 2; // 8/2 = 4
    for (int i = 0; i < swapsTime; i++)
    {
        int temperoryStoringArrayElements;
        temperoryStoringArrayElements = array[i];
        array[i] = array[sizeOfArray - 1 - i];
        array[sizeOfArray - 1 - i] = temperoryStoringArrayElements;
        // sizeOfArray = 8, so, (8-1) is the index of array and (i) will decresed also to reach out at the last index of an array. To swap the first element with last we need to reach out at the last element index such as sizeOfArray - 1 - i = (8-1-0 = 7) means that we are reaching at the last index as array[7], when the value of (i) will become increased in 1 then (8-1-1 = 6) and now we'll reached at the index 6 means arrray[6].
    }
    arrayTraversing(array, sizeOfArray);

    return 0;
}