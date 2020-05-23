#include <stdio.h>

int main()
{
	int speed = 0;

	printf("Please enter your speed as an integer: ");
	scanf("%d", &speed);

	speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
	switch (speed)
	{
		case 65: printf("No speeding ticket\n");break;
		case 70: printf("Speeding ticket\n");break;
		case 90: printf("Expensive speeding ticket\n");break;
		default: printf("Incorrect entry\n");
	}
	return 0;
}
