// Array with pointer working

#include <stdio.h>

int main() {
	int b[] = {10, 20, 30, 40};
   int *bPtr = b;
	int i;		//counter
	int offset; //counter

	//Вывести массив используя нотацию индексации
	puts("Array b printed with:\nArray subscript notation\n");

	for (i = 0; i < 4; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}

	puts("\nPointer/offset notation where\nthe pointer is the array name\n");

	for (offset = 0;offset < 4;offset++) {
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}

	puts("\nPointer subscript notation");

	for (i = 0; i < 4; i++) {
		printf("bPtr[%d] = %d\n", i, bPtr[i]);
	}

	puts("\nPointer/offset notation");

	for (offset = 0; offset < 4; offset++) {
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
	}

	return 0;
}
