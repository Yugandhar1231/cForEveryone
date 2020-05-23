#include <stdio.h>

int main(void)
{
	int repeat = 0;

	printf("Enter from 1 to 10 how much you love me.\n");
	scanf("%d", &repeat);
	printf("I love you");

	
	while (repeat > 0) 
	{
		printf(" very");
		repeat --;
	}
	printf(" much.\n");
	
	return 0;
}
