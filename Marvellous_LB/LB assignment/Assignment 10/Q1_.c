#include<stdio.h>

float CircleArea(float fRad)
{
    float Pi=3.14;
    float Area=Pi*fRad*fRad;

    return Area;
}

int main()
{   
    float fRad=0;

    printf("Enter radius of circle:\t");
    scanf("%f",&fRad);

    float fRet=CircleArea(fRad);
    
    printf("Area of circle is:\n%f",fRet);

    return 0;
}