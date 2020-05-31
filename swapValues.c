/* Swap values
 * 5/31/20
 */

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("\n Before swapping: a = %d and b = %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;

	printf("\n After swapping: a = %d and b = %d\n", a, b);

	return 0;
}
