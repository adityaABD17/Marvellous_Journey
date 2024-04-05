#include<stdio.h>

float Percentage(int iTotal,float iVal)
{
    float fAns=(iVal/iTotal)*100;

    return fAns;
}

int main()
{
    char cSub[15];
    int iTotal=0;
    int iMarks=0;

    printf("Enter Name of the subject:\n");
    scanf("%s",&cSub);

    printf("Enter total marks for %s:\t",cSub);
    scanf("%d",&iTotal);

    printf("Enter obtained marks for %s:\t",cSub);
    scanf("%d",&iMarks);

    float fRet=Percentage(iTotal,iMarks);

    printf("Obtained marks for %s is %d \n percentage is: %f",cSub,iMarks,fRet);

    return 0;

}