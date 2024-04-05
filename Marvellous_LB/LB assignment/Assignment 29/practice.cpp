#include<iostream>
using namespace std;

void check(int Arr[3][3],int row,int column,int& ones,int& zeros)
{   
    ones=0,zeros=0;

    for(int i=row-1;i<=row;i++)
        {
            for(int j=column-1;j<=column;j++)
            {
                while((i>=row-1 || i<row+1) || (j>=column-1 || j<=column+1))
                {
                
                    if(i!=row || j!=column)
                    {
                        if(Arr[i][j]==1)
                        {
                            ones++;
                        }
                        else
                        {
                            zeros++;
                        }
                    }
                }
            }
        }
    
    cout<<"Done";

}
int main()
{
    int i,j=0;
    int Arr[3][3];
    int iR,iC=0;

    
    printf("Enter numbers in multidimensional array: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    
    printf("Elements in the array are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter number of row and column to travel to a specific position:\n");
    scanf("%d",&iR);
    scanf("%d",&iC);

    int ones,zeros=0;


    check(Arr,iR,iC,ones,zeros);

    printf("There are %d number of ones and %d number of zeros in the matrix",ones,zeros);
    
    return 0;

}