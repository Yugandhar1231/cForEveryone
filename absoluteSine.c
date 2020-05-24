/* Find absolute value of sine function
 * By Mallory Smith
 * 5/23/20
 * Note: When compiling add -lm option to use sin()
 * Ex: gcc -o filename.exe filename.c -lm
 */

#include <stdio.h>
#include <math.h> // has  sin() and fabs()

int main(void)
{ 
	double input, result;

	printf("Please enter an integer to find the sine value: ");
	scanf("%lf", &input);

	if (input > 1) 
	{
	printf("That is not valid. Please enter a number less than 1.\n");
	} else {
	result = fabs(sin(input));
	printf("The absolute value of sin(%.3lf) is %lf\n", input, result);
	}

	return 0;
}
