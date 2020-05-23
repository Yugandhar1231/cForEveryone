#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	a = (b = 7, c + d);
	printf("%d\n", a);
}
