// Traversing 2-D array, and the algorithm also works for multidimensional as you wish
#include <stdio.h>

int main()
{
    /*
    //  one-dimensional Array
    int marks[3];

    // initializing array elements-manually
    marks[0] = 96;
    marks[1] = 80;
    marks[2] = 77;
    //    // initializing array elements-using loops
    //     for (int i = 0; i < 3; i++)
    //     {
    //         marks[i] = 88;
    //     }
    for (int i = 0; i < 3; i++)
    {
        printf("%d", marks[i]);
    }
    */

    //    two-dimensional array
    int array[][3] = {{1, 2, 3}, {4, 5, 6}}; // array[]  me 2-arrays, aur dono-arrays me 3 elements hain
                                             // array[0] = {1,2,3} and array[1] = {4,5,6}
                                             // 1-D array me marks[0] = 96 hain, wahin 2-D me element na hoke ik array hai
    // 2-rows and 3-columns
    int atIndexOfArray; // atIndex is the index of array, like array[0] = {1,2,3}, and array[1]= {4,5,6}, [ {1,2,3}, {4,5,6} ] these 2 arrays are elements of array[][3]
    printf("The size of the array is: %d\n", (((sizeof(array)) / (sizeof(int)))) / ((sizeof(array[atIndexOfArray])) / (sizeof(int))));
    // size of (array) is divided by the size of (array of the array) =  6/3
    printf("The size of the array of the array is: %d\n\n", (sizeof(array[atIndexOfArray])) / (sizeof(int))); // 3
    int sizeOfArray = (((sizeof(array)) / (sizeof(int)))) / ((sizeof(array[atIndexOfArray])) / (sizeof(int)));
    int sizeOfArrayOfArray = (sizeof(array[atIndexOfArray])) / (sizeof(int));

    // traversal of 2-D array
    for (int row = 0; row < sizeOfArray; row++)
    {
        for (int column = 0; column < sizeOfArrayOfArray; column++)
        {
            printf("%d ", array[row][column]);
        }
        printf("\n");
    }

    return 0;
}
/*
row = 0 ke liye loop start hoga, uske baad uske andar ke loop chalenge aur woh column = 0 se column = 2 tak chalenge, aur column = 2 tak pahunchne ke bad andar ke loop band ho jayenge.
Uske baad, phir se humara upar wala loop chalege, aur is baar woh row = 1 ke liye run karega, aur uske andar wala loop bhi phir se column = 2 tak jayega aur band ho jayega. ab humara row = 1 hote hi loop band ho jayega, kyunki condition yahin tak satisfied tha.
*/