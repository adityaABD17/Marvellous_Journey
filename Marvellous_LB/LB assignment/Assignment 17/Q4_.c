#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
   int iCnt=0,iNum=0,iTemp=0;

    printf("Numbers with theree digits are:\n");
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
        iTemp=Arr[iCnt];
    
    while(iTemp!=0)
     {
        iTemp/=10;
        iNum++;

     }
        if(iNum==3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    iNum=0;
   }
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);

    if(ptr==NULL)
    {
        printf("Can not alloacte memory...");
    }

    printf("Enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)\
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    free(ptr);

    return 0;
}