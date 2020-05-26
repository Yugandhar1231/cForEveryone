/* Write fibonacci sequence recursively
 * 5/25/20
 */

#include <stdio.h>

long recursive_fib(int n) //using recursion takes more stack space and time than finding fib iteratively
{
	if (n <= 1)
		return n;
	else
		return(recursive_fib(n-1) + recursive_fib(n-2));
}

int main(void)
{
	int how_many = 0, i;
	printf("Please enter an integer to find the fibonacci sequence: ");
	scanf("%d", &how_many);
	printf("\n fibonacci\n");

	for (i = 0; i < how_many; i++)
		printf("\n i = %d\t fib = %ld \n", i, recursive_fib(i));
}

//Please keep in mind: recursive solution will take a long time!
