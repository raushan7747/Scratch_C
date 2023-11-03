#include <stdio.h>

typedef struct Student_details
{
    char student_program[20]; // BCA
    char institute[20];       // SRM University
    char name[20];            // abc
    char email_id[20];        // abc@gmail
    int student_id;           // 893485
    int roll_no;              // 200
    int batch;                // 2023
    int semester;             // 2
} sts;
int main()
{
    sts students;
    printf("Enter the student name which you wany to get about that\n\n");
    scanf("%s %s %s %s %d %d %d %d", students.student_program, students.institute, students.name, students.email_id,
          &students.student_id, &students.roll_no, &students.batch, &students.semester);
    printf("\n\nThe entries given by you are the:\n\n  %s\n %s\n %s\n %s\n %d\n %d\n %d\n %d\n ", students.student_program,
           students.institute, students.name, students.email_id,
           students.student_id, students.roll_no, students.batch, students.semester);
    return 0;
}