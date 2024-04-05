#include<stdio.h>

void Display(int iRows,int iCols)
{
    int iR=0,iC=0;

    for(iR=1;iR<=iRows;iR++)
    {
        int iNo=1;
        char ch='a';
        if(iR%2!=0)
        {
            for(iC=1;iC<=iCols;iC++)
            {
                printf("%c\t",ch);
                ch++;
            }
            printf("\n");
        }
        else if(iR%2==0)
        {
            for(iC=1;iC<=iCols;iC++)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            printf("\n");
        }
    }

}

int main()
{
    int iRow=0,iCol=0;

    printf("Enter rows and columns to print pattern:\n");
    scanf("%d %d",&iRow,&iCol);

    Display(iRow,iCol);

    return 0;

}