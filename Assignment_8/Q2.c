// write a program which accept width and height of rectangle from user and calculate its area.
// (Area = Width * Height)

// Input : 5.3   9.78
// Output : 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area = 0.0f;

    Area = fWidth * fHeight;
    
    return Area;
}
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dret = 0.0f;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dret = RectArea(fValue1, fValue2);

    printf("the area of rectangle  is : %f",dret);

    return 0;
}