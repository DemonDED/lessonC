#include <stdio.h>

int main() {
	int sum = 0;
	int x = 1;

	while(x < 11) {
		sum += x;
		++x;
	}

	printf("Сумма равна: %d\n", sum);

	return 0;
}
