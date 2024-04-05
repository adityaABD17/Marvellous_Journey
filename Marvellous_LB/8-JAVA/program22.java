import java.util.*;

class Pattern
{
    public void Display(int iRows,int iCols)
    {
        int i=0,j=0;

        for(i=1;i<=iRows;i++)
        {
            for(j=1;j<=iCols;j++)
            {
                System.out.println("*\t");
            }
            System.out.println();
        }
    }
}

class program22
{
    public static void main(String a[])
    {
        int iRow=0,iCol=0;
        Pattern pobj=new Pattern();
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        iRow=sobj.nextInt();

        System.out.println("nter number of columns : ");
        iCol=sobj.nextInt();

        pobj.Display(iRow,iCol);
    }
}

