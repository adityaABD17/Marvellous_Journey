import java.util.*;

public class program3 {
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1=0,iNo2=0,iAns=0;

        System.out.println("Enter First number : ");
        iNo1=sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2=sobj.nextInt();

        iAns=iNo1+iNo2;

        System.out.println("Addition is : "+iAns);

    }
}
