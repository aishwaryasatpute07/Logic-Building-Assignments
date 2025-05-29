// write a program which accept temperature in fahernhit and convert it into celsius .
// (1 celsius = (fahrenhit - 32) * (5 / 9))

// Input : 10
// Output : -12.2222 (10 - 32)*(5/9)

// Input : 34
// Output : 1.11111 (34 - 32)*(5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double celsius ;

    celsius = (fTemp - 32 ) * ((5.0/9.0));

    return celsius;

}
int main()
{
    float fValue = 0.0f;
    double dret = 0.0f;

    printf("Enter temperature in faherenheit : ");
    scanf("%f",&fValue);

    dret = FhtoCs(fValue);

    printf(" Celcius : %f",dret);

    return 0;
}
