#include <stdio.h>

int integer_power(int base, int exponent);

int main() {
	int base, exponent;

	printf("%s", "Enter number base and exponent - ");
	if (scanf("%d%d", &base, &exponent) == 2) {
		int result = integer_power(base, exponent);
		printf("Result - %d\n", result);
	} else {
		puts("Incorrect data!");
		return -1;
	}

	return 0;
}

int integer_power(int base, int exponent) {
	int result = 1;

	for (;exponent > 0;exponent--) {
		result *= base;
	}

	return result;
}
