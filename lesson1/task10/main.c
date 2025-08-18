#include <stdio.h>

int main() {
	printf("A\n%4s\n%7s\n%10s\n%10s%3s\n%10s%6s\n%10s%9s\n", "A", "A", "A", "A", "A", "A", "A", "A", "A");
	printf("%10s%6s\n%10s%3s\n%10s\n%7s\n%4s\nA\n\n", "A", "A", "A", "A", "A", "A", "A");
	printf("DDDDDDDDDD\nD%9s\nD%9s\n D%7s\n%3sDDDDD\n\n", "D", "D", "D", "D");
	printf("EEEEEEEEEEEEE\nE%6s%6s\nE%6s%6s\nE%6s%6s\n\n\n", "E", "E", "E", "E","E", "E");
	return 0;
}
