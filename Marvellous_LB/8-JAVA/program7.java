import java.util.*;
class Numbers
{
    public void EvenFactors(int iVal)
    {
        System.out.println("Even Factors are : ");
        int iCnt=0;
        for(iCnt=2;iCnt<=(iVal/2);iCnt+=2)
        {
            if(iVal%2==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
public class program7
{
    public static void main (String arg[])
    {
        int iNo=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number to check even Factorials : ");
        iNo=sobj.nextInt();

        Numbers nobj=new Numbers();
        nobj.EvenFactors(iNo);
    }
}
