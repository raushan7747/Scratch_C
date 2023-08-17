// C code for function with no arguments
// but have return value
#include <math.h>
#include <stdio.h>

int sum();

int main()
{
	int num, check;
	// num = sum();
	printf("Sum of two given values = %d", sum());
	return 0;
    // check = main();
    // main();
    // printf("the value of main () is %d", check);
}

int sum()
{
	int a = 100, b = 160; //sum;
	// sum = sqrt(a) + sqrt(b);
	return sqrt(a) + sqrt(b);
	// return sum;
}
