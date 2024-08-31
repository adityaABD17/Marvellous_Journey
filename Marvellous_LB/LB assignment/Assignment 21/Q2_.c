#include<stdio.h>

void Display(int iRows,int iCols)
{
    int iR=0,iC=0,iNoE=11,iNoO=10;

    for(iR=1;iR<=iRows;iR++)
    {
         if(iR%2!=0)
         {
            for(iC=1;iC<=iCols;iC++)
            {
                if(iNoE>10)
                {
                    iNoE=2;
                }
                printf("%d\t",iNoE);
                iNoE+=2;
            }
            printf("\n");
         }
    
        else if (iR%2==0)
        {
            for(iC=1;iC<=iCols;iC++)
            {
                if(iNoO>9)
                {
                    iNoO=1;
                }
                printf("%d\t",iNoO);
                iNoO+=2;
            }
            printf("\n");
        }
    }
}

int main()
{
    int iRows=0,iCols=0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iRows,&iCols);

    Display(iRows,iCols);

    return 0;
}
