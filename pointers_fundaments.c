#include <stdio.h>
int main()
{
    int integer_variable = 34;
    int *value_at_address_of_variable;
    value_at_address_of_variable = &integer_variable;

    // This will print the value of (integer_variable)
    printf("The value of (Integer_variable) is: %d\n\n", integer_variable);

    // This will print the value address of (integer_variable), because it store the address of(i_v)
    printf("The Address of (integer_variable) is: %d\n\n", value_at_address_of_variable);

    // This will print the value address of (integer_variable), because it store the address of(i_v)
    printf("The Address of (integer_variable) is: %u\n\n", value_at_address_of_variable);

    // This will print the value of (integer_variable)
    printf("The value of (value_at_address_of_variable) is: %d\n\n", *value_at_address_of_variable);

    // This will print the of (integer_variable)
    printf("The value of (value_at_address_of_variable) is: %u\n\n", *value_at_address_of_variable);

    // This will print the value address of (integer_variable), because it store the address of(i_v)
    printf("The value of (value_at_address_of_variable) is: %d\n\n", *(&value_at_address_of_variable));

    // This will print the address of (integer_variable), because it store the address of(i_v)
    printf("The value of (value_at_address_of_variable) is: %u\n\n", *(&value_at_address_of_variable));

    return 0;
}