/* calculate the average 
 * By Mallory Smith
 * May 17th, 2020 */

#include <stdio.h>

int main(void) {
	int a = 2, b = 3, c = 100;
	double average = 0.0;

	printf("a = %d, b = %d, c = %d\n", a,b,c);
	average = (a + b + c) / 3.0;
	printf("The average is: %f\n", average);

	return 0;
}
