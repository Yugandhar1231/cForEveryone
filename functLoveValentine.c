/* Write a function that describes how much someone loves you
 * Based off other assignment I called loveValentine
 * By Mallory Smith
 * 5/24/2020
 */

#include <stdio.h>


void write_very(int count)
{
        while (count > 0) 
	{
		printf(" very");
       		count--;
	}			        
        printf(" much.\n");
}	


int main(void)
{
        int repeat = 0;
        printf("Enter from 1 to 10 how much you love me: ");
        scanf("%d", &repeat);
        printf("I love you");
	write_very(repeat);
	return 0;
}
