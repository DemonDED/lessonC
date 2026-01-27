#include <stdio.h>
#include <limits.h>

void test_sum(signed int si_a, signed int si_b);

int main() {
	signed int a, b;
	int sum = 0;

	printf("Max - %d\nand min - %d\n", INT_MAX, INT_MIN);

	if (scanf("%d%d", &a, &b) == 2) {
		test_sum(a, b);
	} else {
		puts("Incorrect data");
	}
	
	return 0;
}

void test_sum(signed int si_a, signed int si_b) {
  signed int sum;
  if (((si_b > 0) && (si_a > (INT_MAX - si_b))) ||
      ((si_b < 0) && (si_a < (INT_MIN - si_b)))) {
    /* Handle error */
	 puts("Incorrect data!");
  } else {
    sum = si_a + si_b;
	 puts("Ok");
	 printf("res - %d\n", sum);
  }
  /* ... */
}
