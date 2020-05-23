/* Demonstration of integer types: short, int, unsigned, and long
 * By Mallory Smith
 * May 17th, 2020
 */

#include <stdio.h>

int main(void) 
{
	short short_a = 5;
	int int_a = 67;
	unsigned unsigned_a = 67u;
	long long_a = 67l;

	printf("short_a = %hd, divide by int 2 is %d\n", short_a, short_a/2);
	printf("short_a = %hd, divide by float 2.0 is %lf\n", short_a, short_a/2.0);
	printf("67 as a char is %c\n", int_a);
	printf("sizes of short, int, unsigned, and long on my machine are: ");
	printf("%lu bytes, %lu bytes, %lu bytes, %lu bytes\n", sizeof(short_a), sizeof(int_a), sizeof(unsigned_a), sizeof(long));

	return 0;

}
