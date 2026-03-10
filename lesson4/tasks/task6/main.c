#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	printf("Rand 1 - 2 -- %d\n", rand() % 1 + 1);
	printf("Rand 1 - 100 -- %d\n", rand() % 99 + 1);
	printf("Rand 0 - 9 -- %d\n", rand() % 10);
	printf("Rand 1000 - 1112 -- %d\n", rand() % 113 + 1000);
	printf("Rand -1 - 1 -- %d\n", rand() % 2 - 1);
	printf("Rand -3 - 11 -- %d\n", rand() % 15 - 3);

	return 0;
}
