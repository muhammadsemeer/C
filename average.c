#include <stdio.h>

int main()
{
    float num1, num2;
    printf("\nEnter 2 Numbers : ");
    scanf("%f%f", &num1, &num2);
    float average = (num1 + num2) / 2;
    printf("Average of %f and %f = %f\n", num1, num2, average);
    return 0;
}