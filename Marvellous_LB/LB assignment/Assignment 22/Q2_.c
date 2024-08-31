#include<stdio.h>

void Display(int iRows,int iCols)
{
    for(int i = iRows ; i >= 1 ; i--)
    {
        for(int j = 1 ; j <= iCols ; j++)
        {
            if(i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
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