#include <stdio.h>

int main() {
	int a = 7;
	int *aPtr = NULL;
	int b = 7;

	aPtr = &a;
	
	printf("a is    %p\n", &a);
	printf("aPtr is %p\n", aPtr);
	printf("b is    %p\n", &b);

	printf("\na value - %4d\n", a);
	printf("aPtr value - %d\n", *aPtr);
	printf("b value - %4d\n", b);

	return 0;
}
