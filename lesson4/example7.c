#include <stdio.h>

long factorial(unsigned int number);

int main(void) {
	unsigned int i; // counter

	for (i = 0; i <= 10; i++) {
		printf("%2d! = %ld\n", i, factorial(i));
	}

	return 0;
}

long factorial(unsigned int number) {
	if (number <= 1) {
		return 1;
	} else {
		return (number * factorial(number - 1));
	}
}
