#include<stdio.h>

float ConvertCelsius(float fFah)
{
    float fCelsius=(fFah-32)*5/9;
    return fCelsius;
}

float main()
{
    float fFah=0;

    printf("Enter temperature in Fahrenheit to convert into Celsius:\t");
    scanf("%f",&fFah);

    float fRet=ConvertCelsius(fFah);

    printf("%f Fahrenheit is coverted into %f Celsius.",fFah,fRet);

    return 0;
}