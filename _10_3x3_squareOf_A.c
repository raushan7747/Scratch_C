#include <stdio.h>
int main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // previous elements of the matrix, which is given by the user is:
    int previousFirst, previousSecond, previousThird, previousFourth, previousFifth, previousSixth, previousSeventh, previousEighth, previousNineth;
    previousFirst = matrix[0][0];
    previousSecond = matrix[0][1];
    previousThird = matrix[0][2];
    previousFourth = matrix[1][0];
    previousFifth = matrix[1][1];
    previousSixth = matrix[1][2];
    previousSeventh = matrix[2][0];
    previousEighth = matrix[2][1];
    previousNineth = matrix[2][2];
    // after manipulation of the matrix
    int firstElement, secondElement, thirdElement, fourthElement, fifthElement, sixthElement, seventhElement, eighthElement, ninethElement;
    firstElement = (matrix[0][0] * matrix[0][0]) + (matrix[0][1] * matrix[1][0]) + (matrix[0][2] * matrix[2][0]);
    secondElement = (matrix[0][0] * matrix[0][1]) + (matrix[0][1] * matrix[1][1]) + (matrix[0][2] * matrix[2][1]);
    thirdElement = (matrix[0][0] * matrix[0][2]) + (matrix[0][1] * matrix[1][2]) + (matrix[0][2] * matrix[2][2]);
    fourthElement = (matrix[1][0] * matrix[0][0]) + (matrix[1][1] * matrix[1][0]) + (matrix[1][2] * matrix[2][0]);
    fifthElement = (matrix[1][0] * matrix[0][1]) + (matrix[1][1] * matrix[1][1]) + (matrix[1][2] * matrix[2][1]);
    sixthElement = (matrix[1][0] * matrix[0][2]) + (matrix[1][1] * matrix[1][2]) + (matrix[1][2] * matrix[2][2]);
    seventhElement = (matrix[2][0] * matrix[0][0]) + (matrix[2][1] * matrix[1][0]) + (matrix[2][2] * matrix[2][0]);
    eighthElement = (matrix[2][0] * matrix[0][1]) + (matrix[2][1] * matrix[1][1]) + (matrix[2][2] * matrix[2][1]);
    ninethElement = (matrix[2][0] * matrix[0][2]) + (matrix[2][1] * matrix[1][2]) + (matrix[2][2] * matrix[2][2]);
    // printing the square of a matrix
    printf("square of a 3x3 matrix:\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d", firstElement, secondElement, thirdElement, fourthElement, fifthElement, sixthElement, seventhElement, eighthElement, ninethElement);
    printf("\n");
    // printing the cube of a matrix
    int cubeFirst = (firstElement * previousFirst) + (secondElement * previousFourth) + (thirdElement * previousSeventh);
    int cubeSecond = (fifthElement * previousSecond) + (secondElement * previousFifth) + (thirdElement * previousEighth);
    int cubeThird = (firstElement * previousThird) + (secondElement * previousSixth) + (thirdElement * previousNineth);
    int cubeFourth = (fourthElement * previousFirst) + (fifthElement * previousFourth) + (sixthElement * previousSeventh);
    int cubeFifth = (fourthElement * previousSecond) + (fifthElement * previousFifth) + (sixthElement * previousEighth);
    int cubeSixth = (fourthElement * previousThird) + (fifthElement * previousSixth) + (sixthElement * previousNineth);
    int cubeSeventh = (seventhElement * previousFirst) + (eighthElement * previousFourth) + (ninethElement * previousSeventh);
    int cubeEighth = (seventhElement * previousSecond) + (eighthElement * previousFifth) + (ninethElement * previousEighth);
    int cubeNineth = (seventhElement * previousThird) + (eighthElement * previousSixth) + (ninethElement * previousNineth);
    printf("\n\n");
    printf("cube of a 3x3 matrix:\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d", cubeFirst, cubeSecond, cubeThird, cubeFourth, cubeFifth, cubeSixth, cubeSeventh, cubeEighth, cubeNineth);
    return 0;
}