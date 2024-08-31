#include<stdio.h>
#include<stdbool.h>

bool Greater(int iVal)
{
    if(iVal>100)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iNo=0;

    printf("Enter a number to check greater than 100:\t");
    scanf("%d",&iNo);

    int iRet= Greater(iNo);

    if(iRet==true)
    {
        printf("%d is Greater than 100.",iNo);
    }
    else
    {
        printf("%d is smaller than 100.",iNo);
    }

    return 0;
}