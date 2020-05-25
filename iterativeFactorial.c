/* Write factorials iteratively
 * 5/25/20
 */

#include <stdio.h>

int main(void) //long works up to 20
{
	unsigned long long factorial = 1; //unsigned: variable will only hold pos. numbers
	int i, n;

	printf("Please enter a positive integer up to 65: ");
	scanf("%d", &n);

	if (n < 0) 
	{
		printf("Factorial of a negative number does not exist. Please try again.\n");
	}
	else {
	
		for (i = 1; i <= n; i++)
	{
		factorial = factorial * i; //could also be factorial *= 1
	}
		printf("The factorial of %d is: %llu\n", n, factorial); //formatted as long long unsigned
	}

	return 0;
}

