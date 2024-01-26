// finding Eigen value of a 3 x 3 matrix
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
    // the first row of the matrix
    int firstColumn = matrix[0][0];
    int secondColumn = matrix[0][1];
    int thirdColumn = matrix[0][2];
    // values after finding determinants of the minors(first-row)
    int firstRow = ((matrix[1][1]) * (matrix[2][2])) - ((matrix[2][1]) * (matrix[1][2]));
    int secondRow = ((matrix[2][2]) * (matrix[1][0])) - ((matrix[2][0]) * (matrix[1][2]));
    int thirdRow = ((matrix[1][0]) * (matrix[2][1])) - ((matrix[2][0]) * (matrix[1][1]));
    int determinant = (firstColumn * firstRow) - (secondColumn * secondRow) + (thirdColumn * thirdRow);
    int trace = matrix[0][0] + matrix[1][1] + matrix[2][2];
    int firstMinor = (matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2]);
    int secondMinor = (matrix[0][0] * matrix[2][2]) - (matrix[2][0] * matrix[0][2]);
    int thirdMinor = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    int sumOfMinor = firstMinor + secondMinor + thirdMinor;
    int characteristicEquation, lambda1, lambda2, eigen1, eigen2, eigen3;
    printf("\nCharacteristic equation formula is:\n(Lambda-cube) - Trace of matrix (Lambda-square) + Sum of minors along diagonals (Lambda) - Determinant of matrix\n\n");
    printf("Characteristic equation is:\n(Lambda-cube) - %d (Lambda-square) + %d (Lambda) - %d = 0\n\n", trace, sumOfMinor, determinant);
    for (lambda1 = -1; lambda1 > -100; lambda1--)
    {
        characteristicEquation = (lambda1 * lambda1 * lambda1) - (trace * (lambda1 * lambda1)) + (sumOfMinor * lambda1) - determinant;
        if (characteristicEquation == 0)
        {
            eigen1 = lambda1;
            printf("The eigen value is: %d\n", lambda1);
        }
    }
    for (lambda2 = 1; lambda2 < 100; lambda2++)
    {
        characteristicEquation = (lambda2 * lambda2 * lambda2) - (trace * (lambda2 * lambda2)) + (sumOfMinor * lambda2) - determinant;
        if (characteristicEquation == 0)
        {
            eigen2 = lambda2;
            printf("The eigen value is: %d\n", lambda2);
        }
    }
    // sum of eigen values = trace of matrix
    for (eigen3 = -1; eigen3 > -100; eigen3--)
    {
        if (eigen1 + eigen2 + eigen3 == trace)
        {
            printf("The eigen value is: %d\n", eigen3);
        }
    }
    for (eigen3 = 1; eigen3 < 100; eigen3++)
    {
        if (eigen1 + eigen2 + eigen3 == trace)
        {
            printf("The eigen value is: %d\n", eigen3);
        }
    }
    return 0;
}