/* find ASCII values of char
 * By Mallory Smith
 * May 17th, 2020
 */

#include <stdio.h>

int main(void) {
	char c = 'a';
	printf("c in ASCII %d\n", c);
	printf("c the character %c\n", c);
	printf("Three consecutive chars are: %c%c%c\n", c, c+1, c+2);
       	printf("Three bells will go off now: %c%c%c\n", '\a', '\a', '\a'); 
	/*a stands for alert, should hear bell but nothing goes off, may b/c of ubuntu */

	return 0;

}
