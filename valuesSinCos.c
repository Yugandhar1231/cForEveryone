/* Print a table of values of sine and cosine between (0,1)
 * By Mallory Smith
 * May 24th, 2020
 */

#include <stdio.h>
#include <math.h> 

int main(void)
{
	double PI = 3.14159265358;
	double input; //user input in degrees
	
	printf("Please enter your angle value in degrees: ");
	scanf("%lf", &input);

	printf("\n Sin and Cos Values between 0 and 1 \n");
	printf("- - - - - - - - - - - - - - - - -");
	printf("\n Angle |  Sin  | Cos \n");
	printf("- - - - - - - - - - - - - - - - -");
	
	double radian = fabs(input * (PI / 180));

	printf("\n %.3lf | %.3lf | %.3lf \n", input, sin(radian), cos(radian));

	return 0;

}
