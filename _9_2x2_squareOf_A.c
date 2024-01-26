// finding the square of matrix of 2x2
#include <stdio.h>
int main()
{
    int matrix[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of the matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // previous elements of the matrix, which is given by the user is:
    int previousFirst, previousSecond, previousThird, previousFourth;
    previousFirst = matrix[0][0];
    previousSecond = matrix[0][1];
    previousThird = matrix[1][0];
    previousFourth = matrix[1][1];
    // after manipulation of the matrix
    int firstElement, secondElement, thirdElement, fourthElement;
    firstElement = (matrix[0][0] * matrix[0][0]) + (matrix[0][1] * matrix[1][0]);
    secondElement = (matrix[0][0] * matrix[0][1]) + (matrix[0][1] * matrix[1][1]);
    thirdElement = (matrix[1][0] * matrix[0][0]) + (matrix[1][1] * matrix[1][0]);
    fourthElement = (matrix[1][0] * matrix[0][1]) + (matrix[1][1] * matrix[1][1]);
    // printing the square of a matrix
    printf("square of a 2x2 matrix:\n%d\t%d\n%d\t%d", firstElement, secondElement, thirdElement, fourthElement);
    printf("\n");
    // printing the cube of a matrix
    int cubeFirst = (firstElement * previousFirst) + (secondElement * previousThird);
    int cubeSecond = (firstElement * previousSecond) + (secondElement * previousFourth);
    int cubeThird = (thirdElement * previousFirst) + (fourthElement * previousThird);
    int cubeFourth = (thirdElement * previousSecond) + (fourthElement * previousFourth);
    printf("\n\n");
    printf("cube of a 2x2 matrix:\n%d\t%d\n%d\t%d", cubeFirst, cubeSecond, cubeThird, cubeFourth);
    return 0;
}