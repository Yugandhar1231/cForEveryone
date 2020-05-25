/* Write countdown program using loops
 * 5/25/20
 */

#include <stdio.h>

int main(void)
{
	int start = 10;
	int countDown = 9;
	printf("time is %d\n", start);
	while (countDown > 0)
	{
		printf("%d\n", countDown);
		countDown--;
	}
	printf("Blast off!\n");
	return 0;
}
