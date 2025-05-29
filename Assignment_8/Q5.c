// write a program which accept area in square feet and convert it into square meter,
// (1 square feet = 0.0929 square meter)

// Input : 5
// Output : 0.464515

// Input : 7
// Output : 0.650321

#include<stdio.h>

double SquareMeter(int iValue)
{
    float sqmeter = 0.0f;
    float sqfeet = 0.0929;

    sqmeter = iValue * sqfeet;

    return sqmeter;
}

int main()
{
    int iValue = 0;
    double dret = 0.0f;

    printf("Enter area in square feet :");
    scanf("%d",&iValue);

    dret = SquareMeter(iValue);

    printf("Square feet : %f\n",dret);

    return 0;

}