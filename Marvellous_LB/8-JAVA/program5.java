import java.util.*;

class Arithmatic
{
    public int Addition(int i,int j)
    {
        int Sum=0;
        Sum=i+j;
        return Sum;

    }
}

public class program5 
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1=0,iNo2=0,iAns=0;

        System.out.println("Enter First number : ");
        iNo1=sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2=sobj.nextInt();

        Arithmatic aobj=new Arithmatic();
        iAns=aobj.Addition(iNo1,iNo2);

        System.out.println("Addition is : "+iAns);

    }
}