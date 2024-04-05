#include<stdio.h>

float ConvertMeter(float fKm)
{
    int iMeter=fKm*1000;
    return iMeter;
}

float main()
{
    float fKm=0;

    printf("Enter Kilometre to convert in meter:\t");
    scanf("%f",&fKm);

    int iRet=ConvertMeter(fKm);

    printf("%f KM is coverted into %d meter.",fKm,iRet);

    return 0;
}