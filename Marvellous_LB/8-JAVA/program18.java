
import java.util.*;
class MarvellousX
{
    public int SmallCount(String s)
    {
        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
           if((s.charAt(i)>='a')&&(s.charAt(i)<='z'))
           {
            iCnt++;
           }
        }
        return iCnt;
    }

    public int CapCount(String s)
    {
        int iCnt=0;

        for(int i=0;i<s.length();i++)
        {
            if((s.charAt(i)>='A')&&(s.charAt(i)<='Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }

    public int DigiCount(String s)
    {
        int iCnt=0;

        for(int i=0;i<=s.length();i++)
        {
            if((s.charAt(i)>='0')&&(s.charAt(i)<='9'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
public class program18 {
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str=sobj.nextLine();

        MarvellousX obj=new MarvellousX();

        int iRet=obj.SmallCount(str);

        System.out.println("Number of small case letters are : "+iRet);

        iRet=obj.CapCount(str);
        System.out.println("Number of Captital case letters are : "+iRet);


    }
}