// C code for function with arguments
// and return value
#include <stdio.h>
#include <string.h>

int function(int, int[]);

int main()
{
	int i, a = 20;
	int arr[5] = { 10, 20, 30, 40, 50 };

	a = function(a, &arr[0]);

	printf("value of a is %d\n", a);
	for (i = 0; i < 5; i++) {
		printf("value of arr[%d] is %d\n", i, arr[i]);
	}

	return 0;
}

int function(int a, int* arr)
{
	int i;
	a = a + 20;

	arr[0] = arr[0] + 50;
	arr[1] = arr[1] + 50;
	arr[2] = arr[2] + 50;
	arr[3] = arr[3] + 50;
	arr[4] = arr[4] + 50;

	return a;
}
