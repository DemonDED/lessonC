#include <stdio.h>

int cubeByValue(int n); // pass by value
void cubeByReference(int *nPtr); // pass by link/pointer

int main() {
	int number = 5;
	int number_value = 0;

	printf("Original value of number is %d\n", number);

	number_value = cubeByValue(number);
	cubeByReference(&number);

	printf("Object pass by value - %d\n", number_value);
	printf("Object pass by link/pointer - %d\n", number);

	return 0;
}

int cubeByValue(int n) {
	return n * n * n;
}
void cubeByReference(int *nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;
}
