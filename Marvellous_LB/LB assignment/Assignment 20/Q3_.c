#include<stdio.h>
#include<ctype.h>

void Display(int iRows,int iCols)
{
    int iR=0,iC=0;
    char ch='A';
    for(iR=1;iR<=iRows;iR++)
    {
        for(iC=1;iC<=iCols;iC++)
        {
           printf("%c\t",ch);
        }
        printf("\n");
        ch++;
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