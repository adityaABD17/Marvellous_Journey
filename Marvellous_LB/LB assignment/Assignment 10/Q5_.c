#include<stdio.h>

float AreaSquareMeter(float fSFa)
{
    float fASQm=0.0929*fSFa;

    return fASQm;
}

float main()
{
    float fSFa=0.0;

    printf("Enter area in square feet:\t");
    scanf("%f",&fSFa);

    float fASQm= AreaSquareMeter(fSFa);

    printf("Area in square meter is:%f",fASQm);

    return 0;
}