/* expressions quiz */

#include <stdio.h>

int main(void) {
	int a = 3, b = 4, c = -2;

	int division_a = b/a, division_b = a/b, increment_ab = ++a + b++;
	printf("division of b/a is %d\n", division_a);
	printf("division of a/b is %d\n", division_b);
	printf("++a + b++ is %d\n", increment_ab);

	return 0;
}
