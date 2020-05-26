/* Write fibonacci sequence iteratively
 * 5/25/20
 * Fibonacci sequence can be derived from: F(n) = F(n - 1) + F(n - 2);
 * This program does not account for incorrect user inputs like negatives.
 */

#include <stdio.h>

long fibonacci(int n)
{
	long f2 = 0, f1 = 1, f_old;
	int i;

	for (i = 0; i < n; i++)
	{
		f_old = f2;
		f2 = f2 + f1;
		f1 = f_old;
	};

	return f2;
}

int main(void)
{
	int how_many = 0, i;
	printf("Enter an integer to see the fibonacci sequence: ");
	scanf("%d", &how_many);

	for (i = 0; i < how_many; i++)
		printf("\n i = %d\t fib = %ld \n", i, fibonacci(i));
}
