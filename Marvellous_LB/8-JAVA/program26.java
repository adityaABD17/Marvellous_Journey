import java.util.*;

class Digit
{
    public void Display(int iNo)
    {   
        int iDigit=0;
        int iTemp=iNo,iTemp2=iNo;

        while(iTemp!=0)
        {
            while(iTemp2!=0)
            {
                iDigit=iTemp2%10;
                System.out.print(iDigit+"\t");
                iTemp2=iTemp2/10;
            }
            iTemp2=iNo;
            System.out.println();
            iTemp=iTemp/10;
        }
    }
}

public class program26 {
    public static void main(String a[])
    {
        int iVal=0;
        Scanner sobj=new Scanner(System.in);
        Digit dobj=new Digit();

        System.out.println("Enter a digit to print reverse : ");
        iVal=sobj.nextInt();

        dobj.Display(iVal);
    }
}
