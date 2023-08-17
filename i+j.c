// Sum of two vectors (x y) (a b)
// sum = (x + a) (y + b)

#include <stdio.h>

typedef struct Sum_vector // Global Declaration
{
    int x;
    int y;
} sv; // } struct, close
// with the help of "typedef" function, [ sv = struct Sum_vector ]

void addition(sv vector_1, sv vector_2, sv sum_vectors); // Function Declaration

int main()
{
    sv vector_1 = {10, 20}; // taking some constant vectors into the "vector_1" variable
    sv vector_2 = {5, 15};  // taking some constant vectors into the "vector_2" variable
    sv sum_vectors = {0};   // Declaring a "sum_vectors" named variable to store some of the above

    addition(vector_1, vector_2, sum_vectors); // Function Calling (parameters should be 'variables' only, not the type of 'variable')

    return 0;

} // } main (), close

// Function named as "Addition", definition here
void addition(sv vector_1, sv vector_2, sv sum_vectors) // Function Definition
{
    sum_vectors.x = vector_1.x + vector_2.x; // Calculating Vectors (x1 + x2) = (10 + 5)
    sum_vectors.y = vector_1.y + vector_2.y; // Calculating vectors (y1 + y2) = (20 + 14)

    printf("\tThis is the sum of Vector x: %2d", sum_vectors.x);  // Reading the sum of 'X' vectors
    printf("\nThis is the sum of Vectors y: %2d", sum_vectors.y); // Reading the sum of 'Y' vectors
}; // } void addition, close
