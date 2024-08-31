#include <stdio.h>
#include <stdbool.h>


int Div5(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    // else{
    //     return false;
    // }
}

int main()
{
    int iVal=0;
    printf("Enter Number to check:\t");
    scanf("%d",&iVal);

    int iRet=Div5(iVal);

    if(iRet==true)
    {
        printf("%d is divisible by 5",iVal);
    
    }
    else{
        printf("%d is not divisible by 5",iVal);
        }


    return 0;
}