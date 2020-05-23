#include <stdio.h>

int main(void) {
	int first_num, second_num, add, subtract, multiply;
	float divide;

	printf("Please enter two numbers\n");
	scanf("%d%d", &first_num, &second_num);

	add = first_num + second_num;
	subtract = first_num - second_num;
	multiply = first_num * second_num;
	divide = first_num / (1.0 * second_num); //typecasting

	printf("The sum of these two numbers is %d\n", add);
	printf("The difference of these numbers is %d\n", subtract);
	printf("The multiplication of these these numbers is %d\n", multiply);
	printf("The dividsion of these numbers is %.2f\n", divide); //why is this %.2?
	
	return 0;
}
