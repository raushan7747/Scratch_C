// finding the Characteristic equation of a 3 x 3 matrix
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
    printf("Characteristic equation is:\n(Lambda-cube) - %d (Lambda-square) + %d (Lambda) - %d = 0", trace, sumOfMinor, determinant);
    return 0;
}