import java.util.*;
class Numbers
{
    public void CommonFactors(int iVal1,int iVal2)
    {
        System.out.println("Common Factors are : ");
        int iCnt=0;
        
        for(iCnt=1;(iCnt<=(iVal1/2))&&(iCnt<=(iVal2/2));iCnt++)
        {
            if((iVal1%iCnt==0)&&(iVal2%iCnt==0))
            {
                System.out.println(iCnt);
            }
        }
    }
}
public class program8
{
    public static void main (String arg[])
    {
        int iNo1=0,iNo2=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter 1st number to common Factors : ");
        iNo1=sobj.nextInt();

        System.out.println("Enter 2nd number to common Factors : ");
        iNo2=sobj.nextInt();

        Numbers nobj=new Numbers();
        nobj.CommonFactors(iNo1,iNo2);
    }
}
