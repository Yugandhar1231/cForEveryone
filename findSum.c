/* Find the sum
 * By Mallory Smith
 * 5/23/2020
 */

#include <stdio.h>

int main(void)
{
	int sum = 0; int n = 10; int i;

	for (i = 1; i < n; i++)
	{
		sum = sum + i;
	printf("The sum is %d, i is %d\n", sum, i);
	}

	return 0;
}
