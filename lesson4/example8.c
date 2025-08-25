#include <stdio.h>

long fibonacci(unsigned int n);

int main(void) {
	long result;
	long number;

	printf("%s", "Enter an integer: ");
	scanf("%ld", &number);

	result = fibonacci(number);

	printf("Fibonacci(%ld) = %ld\n", number, result);
	return 0;
}

long fibonacci(unsigned int n) {
	if (n == 0 || n == 1) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
