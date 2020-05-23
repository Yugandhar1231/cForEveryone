/* Volume of Sphere as Double
 * By Mallory Smith
 * May 17th, 2020
 */

#include <stdio.h>
#define PI 3.14159
// volume of sphere is (4/3.0) * PI * r * r * r in C

int main(void)
{ 
	 double radius;
	 printf("Enter radius: ");
	 scanf("%lf", &radius);
	 double volume;
	 volume = (4/3.0 * PI * radius * radius * radius);
	 printf("volume is : %lf \n\n", volume);

	 return 0;
}
