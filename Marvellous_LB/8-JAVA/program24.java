import java.util.*;

class Pattern
{
    public void Display(String str)
    {
       char Arr[] =str.toCharArray();
       int i=0,j=0;

       for(i=0;i<Arr.length;i++)
       {
        for(j=0;j<Arr.length;j++)
        {
            System.out.print(Arr[j]+"\t");
        }
        System.out.println();
       }
    }
}
public class program24 {
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        Pattern pobj=new Pattern();
        System.out.println("Enter string to print in the pattern : ");

        String s=sobj.nextLine();

        pobj.Display(s);
    }
}
