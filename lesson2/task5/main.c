#include <stdio.h>

int main() {
	int x, y;
	int i = 1;
	int power = 1;

	if(scanf("%d%d", &x, &y) == 2) {
		while(i <= y) {
			power *= x;
			++i;
		}

		printf("%d in pow %d - %d\n", x, y, power);
	} else {
		puts("Incorrect data!");
	}

	return 0;
}
