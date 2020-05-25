/* Write a countdown program recursively
 * 5/25/20
 */

#include <stdio.h>

void recursive_countDown(int n)
{
	int start = 10;

	if (n == 0)
	{
		printf("Blast off!\n"); //base case
	} 
	else {
		printf("%d\n", n); //printf has to go before recursive otherwise countdown will be backwards
		recursive_countDown(n-1); //recursive case
	}

	return;
}

int main()
{
	printf("Time is "); //only prints once
	recursive_countDown(10);
	return 0;
}
