#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nEnter 2 Numbers : ");
    scanf("%d%d", &num1, &num2);
    int quotient = num1 / num2, remainder = num1 % num2;
    printf("\nQuotient = %d\nRemiainder = %d\n", quotient, remainder);
    return 0;
}