/* Find factorials recursively
 * 5/25/20
 */

#include <stdio.h>

int find_factorial(int);

int main()
{
	int input, n;
	unsigned long long factorial; //compute large factorials
	printf("Please enter a positive integer up to 33: ");
	scanf("%d", &input);
	
	if (n < 0)
	{
		printf("Factorial of a negative number does not exist. Please try again.");
	}
	else
	factorial = find_factorial(input);
	printf("The factorial of %d is: %llu\n", input, factorial);

	return 0;
}

int find_factorial(int n)
	{
	if (n == 0) //base case
		return 1;
	return(n * find_factorial(n-1)); //recursive
	}
