/* Give sine of a value between 0 and 1 (non inclusive)
 * By Mallory Smith
 * May 17th, 2020
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	double input, result;

	printf("Please enter a value between 0 and 1:\n");
	scanf("%lf", &input);
	
	if (input < 0 || input > 1) {
	printf("That is not between 0 and 1. Please try again.\n");
	} else {
	result = sin(input);
	printf("The sine of %lf is %f\n", input, result);
	}

	return 0;
}
	
