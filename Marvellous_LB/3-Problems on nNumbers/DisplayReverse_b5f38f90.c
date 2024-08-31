#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize)
{
    int iCnt=0;

    printf("Elements in the reverse order are:\n");

    for(iCnt=(iSize-1);iCnt>=0;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *ptr=NULL;
    int iLength=0, iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int *) malloc (iLength*sizeof(int));

    printf("Enter elements of the array:\n");
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayReverse(ptr,iLength);

    free(ptr);

    return 0;
}