import java.util.*;

class Digit
{
    public void Display(int iNo)
    {   
        int iDigit=0;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            System.out.print(iDigit+"\t");
            iNo=iNo/10;
        }
    }
}

public class program25 {
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
