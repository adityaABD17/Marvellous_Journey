#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0,iEvenCnt=0,iOddCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }

    printf("Even Numbers are:\t%d\n",iEvenCnt);
    printf("Odd Numbers are:\t%d",iOddCnt);

}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter Number of elements you want to enter:\t");
    scanf("%d",&iLength);

    ptr=(int *) malloc (iLength*sizeof(int));

    printf("Enter Elements in the array:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);
    
    free(ptr);

    return 0;
}
