#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0, iSumE=0, iSumO=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumE+=Arr[iCnt];
        }
        else
        {
            iSumO+=Arr[iCnt];
        }
    }

    printf("Sum of Even numbers is:\t%d\n",iSumE);
    printf("Sum of Odd numbers is:\t%d",iSumO);

}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter Number of elements you want to enter:");
    scanf("%d",&iLength);

    ptr=(int *) malloc(iLength*sizeof(int));

    printf("Enter elements in array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    free(ptr);

    return 0;

}