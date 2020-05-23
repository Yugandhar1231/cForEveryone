#include <stdio.h>
#include <math.h>

int main(void)
{
    double input, result;
    printf("Please enter a value between 0 and 1: \n");
    scanf("%lf", &input);
    if (input < 0 || input > 1)
    {
        printf("That is not between 0 and 1. Please try again.");
        else { 
            result = sin(input); 
            }
    }
    printf("The sine of %f is %f\n", input, result);
}