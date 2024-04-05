import java.util.*;
class Numbers
{
    public int FactorsMult(int iVal)
    {
        int iMult=1;
        int iCnt=0;
        for(iCnt=1;iCnt<=(iVal/2);iCnt++)
        {
            if(iVal%iCnt==0)
            {
                iMult*=iCnt;
            }
        }
        return iMult;
    }
}
public class program9
{
    public static void main (String arg[])
    {
        int iNo=0,iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number to check even Factors : ");
        iNo=sobj.nextInt();

        Numbers nobj=new Numbers();
        iRet=nobj.FactorsMult(iNo);

        System.out.println("Multiplication of factors is : "+iRet);
    }
}
