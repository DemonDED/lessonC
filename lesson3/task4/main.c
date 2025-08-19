#include <stdio.h>

int main() {
	int counter = 0;
	int result = 0;
	int eof = 0;

	while(eof != 9999) {
		scanf("%d", &eof);
		if (eof != 9999) {
			result += eof;
		}
		counter++;
	}

	printf("Result is %d", result / counter);

	return 0;
}
