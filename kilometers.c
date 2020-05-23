/* distance of a marathon in km
 * by Mallory Smith
 * May 16th, 2020
 */

#include <stdio.h>

int main(void)
{
	int miles, yards;
	printf("Please enter miles or yards: ");
	scanf("%d%d", &yards, &miles);
	double km;
	km = 1.609 * (miles + yards / 1760.0);
	printf("\n A marathon is %lf km.\n\n", km);
	return 0;
}
