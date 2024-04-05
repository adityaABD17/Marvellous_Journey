#include<stdio.h>
#include <stdbool.h>

int CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;
    printf("Factors are:\n");

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
 {
    if(iNo%iCnt==0)
    {
        iSum+=iCnt;
        printf("%d\n",iCnt);
    }
 }

     if(iSum==iNo)
    {
        return true;
    }
    else{
        return false;
    }
    
}

// bool CheckPerfect(int iData)
// {
//     int iAns=Factors(iData);
//     if(iAns==iData)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }

int main()
{
    int iValue=0;
    printf("Enter Number to check:");
    scanf("%d",&iValue);

    bool bRet=CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("%d is a perfect number",iValue);

    }

    else{
        printf("%d is not a perfect number",iValue);
    }
    return 0;
}