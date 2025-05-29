// Write a program which accepts radius of circle from user and calculate its area.
// consider value of PI as 3.14 (Area = PI * Radius * Radius)

// Input : 5.3
// Output : 88.2026

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    float Area = 0.0f;
    
    Area = PI * fRadius * fRadius;

    return Area;
}
int main()
{
    float fValue = 0.0f;
    double dret = 0.0f;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dret = CircleArea(fValue);

    printf("the area of circle is : %f",dret);

    return 0;
}