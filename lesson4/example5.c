#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	unsigned seed;
	unsigned int i;

	printf("%s", "Enter seed: ");
	scanf("%u", &seed);
	
	if (seed != 0) {	
		srand(seed);
	} else {
		srand(time(NULL));
	}

	for (i = 1; i <= 20; i++) {
		printf("%10d", 1 + (rand() % 6));

		if (i % 5 == 0) {
			puts("");
		}
	}

	return 0;
}
