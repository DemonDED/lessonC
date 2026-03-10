#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int i;

	for (i = 1; i <= 20; i++) {
		printf("%10d", 1 + (rand() % 6)); // 6 коэффециент масштабирования для rand 0 - 5 + 1
		
		if (i % 5 == 0) {
			puts("");
		}
	}

	return 0;
}
