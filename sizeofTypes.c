/* find size of data types on my system
 * By Mallory Smith
 * May 17th, 2020
 */

#include <stdio.h>

int main(void){
	int a = 1, b = 2, c = 3;
	double average = 0.0;
	char ch = 'e';

	printf("on my system: \n\n");
	printf("int is %lu bytes.\n", sizeof(int));
	printf("long int is %lu bytes. \n", sizeof(long int));
	printf("char is %lu bytes. \n", sizeof(ch));
	printf("float is %lu bytes. \n", sizeof(float));
	printf("double is %lu bytes. \n", sizeof(double));
	printf("long double is %lu bytes. \n", sizeof(long double));

	return 0;
}
