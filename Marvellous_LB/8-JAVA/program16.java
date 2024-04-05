import java.util.*;
public class program16 {
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter your full name : ");

        String str=sobj.nextLine();

        System.out.println("Your entered string is : "+str);
        System.out.println("Number of charecters in the string is : "+str.length());

        for(int i=0;i<str.length();i++)
        {
            System.out.println(str.charAt(i));
        }
    }
}
