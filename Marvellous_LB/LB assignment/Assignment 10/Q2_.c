#include<stdio.h>

float RectangleArea(float fHeight,float fWidth)
{
    float fArea=fHeight*fWidth;

    return fArea;
}

float main()
{
    float fHeight=0,fWidth=0;

    printf("Enter Height and Width of rectangle:\n");
    scanf("%f %f",&fHeight,&fWidth);

    float fRet=RectangleArea(fHeight,fWidth);

    printf("Area of rectangle is:\n%f",fRet);
    
    return 0;

}
