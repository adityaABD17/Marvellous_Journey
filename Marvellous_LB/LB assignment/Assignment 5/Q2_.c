#include<stdio.h>

void Factors(int iVal)
{
    int iCnt=0;

    printf("Factorials are:\n");
    
    for(iCnt=(iVal/2);iCnt>0;iCnt--)
    {
        if(iVal%iCnt==0){
        printf("%d\t",iCnt);
     }
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number to evaluate:");
    scanf("%d",&iNo);

    Factors(iNo);

    return 0;
}