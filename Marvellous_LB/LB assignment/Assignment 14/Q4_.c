#include<stdio.h>
#include<stdlib.h>

void nDivisible3_5(int Arr[],int iSize)
{
    int iCnt=0;

    printf("Numbers that are divisible by 3 and 5 are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%3==0)&&(Arr[iCnt]%5==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter in the array:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);
    if(ptr==NULL)
    {
        printf("Unable to allocate memory..!");
    }

    printf("Enter the elements of the array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    nDivisible3_5(ptr,iLength);
    free(ptr);

    return 0;
}