#include <stdio.h>

int main() {
	int number;

	if (scanf("%d", &number) == 1) {
		if (number % 2 == 0) {
			puts("Число четное");
		} else {
			puts("Число нечетное");
		}
	} else {
		puts("Некорректные данные");
	}

	return 0;
}
