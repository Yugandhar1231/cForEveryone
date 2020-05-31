/* Find the average grades
 * 5/30/20
 */

#include <stdio.h>

int main(void)
{
	
	int grades[5] = {78,67,92,83,88}; //5 grades
	int sum = 0, i;
	float average = 0; //need average to be float

	for (i = 0; i < 5; i++)
	{
		printf("Grade is: %d\n", grades[i]); //print out original grades
	}

	printf("\n\n");

	for (i = 0; i < 5; i++)
	{	
		sum = sum + grades[i]; //sum of all the grades
	}
		average = (float)sum/i; //calculate average as float, i would be total grades
		printf("The average grades are: %.2f\n", average); //two decimal places

	return 0;	
}
