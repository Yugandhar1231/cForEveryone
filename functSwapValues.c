/* Swap values using a function
 * Not my original code, it's from geeksforgeeks.org!
 * 5/31/20
 */

#include <stdio.h>

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
  
int main() 
{ 
	int x, y; 
	printf("Enter Value of x: "); 
	scanf("%d", &x); 
	printf("Enter Value of y: "); 
	scanf("%d", &y); 
	swap(&x, &y); 
	printf("After Swapping: x = %d, y = %d\n", x, y);

	return 0; 
} 
