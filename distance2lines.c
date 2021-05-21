#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    printf("Enter Value of x1 : ");
    scanf("%f", &x1);
    printf("Enter Value of y1 : ");
    scanf("%f", &y1);
    printf("Enter Value of x2 : ");
    scanf("%f", &x2);
    printf("Enter Value of y2 : ");
    scanf("%f", &y2);
    // Distance Equation √((x2-x1)²+(y2-y1)²)
    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Distance between (%f,%f),(%f,%f) : %f\n",x1,y1,x2,y2,distance);
    return 0;
}