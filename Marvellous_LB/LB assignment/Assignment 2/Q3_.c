#include<stdio.h>
#include<stdbool.h>

int Display(int iVal)
{
    if (iVal<10){
        return true;
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number:");
    scanf("%d",&iNo);

    int iRet=Display(iNo);

    if(iRet==true){
        printf("Hello..!!!");
    }
    else{
        printf("Demo...");
    }

    return 0;
}