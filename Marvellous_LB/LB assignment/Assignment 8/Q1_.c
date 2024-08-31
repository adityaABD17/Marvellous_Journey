#include<stdio.h>
#include<limits.h>

void Analyse(int iVal)
{
    if(iVal<50)
    {
        printf("Small..");
    }

    else if(iVal>50 && iVal<100)
    {
        printf("Medium..");
    }
    
    else if(iVal>100)
    {
        printf("Large..");
    }

}

int main()
{
    int iNo=0;

    printf("Enter a number you want to analyse:\t");
    scanf("%d",&iNo);

    Analyse(iNo);

    return 0;
}