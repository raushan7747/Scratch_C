#include <stdio.h>
#include <string.h>

// Globaly declaring structure
struct student
{                    // struct is the keyword for declaring or defining the Structure
    int roll_number; // Declaring data types in an only one variable
    float cgpa;
    char Name[100];
};

int main()
{
    struct student Simple_structure;                                           // This is simple structure declaration
    struct student First_student = {196, 9.5, "Raushan"};                      // This is the simple structure array declaration
    printf("This is the Structure of Raushan: %12.3f", First_student.cgpa);    // In the format specifier %f, agter the %
                                                                               // 12 is defining the space for your Console
                                                                               // .3 is the decimal places as you wish
                                                                               // after the (.) such 3, 4, 10, so on.
    struct student *student_pointer = &First_student;                          // Structure pointer variable declaration
    printf("\nThis is the Strucure for Students: %5s", student_pointer->Name); // here's (->) this can be used
                                                                               // instead of (* and .) = (*student_pointer.Name)
    printf("\nThis is the Structure created for the Roll no of Student: %3d", First_student.roll_number);

    return 0;
}
