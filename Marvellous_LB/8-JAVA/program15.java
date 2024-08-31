import java.util.*;

class ArrayX
{
    public int Arr[];

    protected ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please Enter "+Arr.length +" elements..");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println("Enter the element no : "+(iCnt+1));
            Arr[iCnt]=sobj.nextInt();
        }
    }
    protected void Display()
    {
        System.out.println("Elements in the Array are :");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public boolean CheckPalindrome()
    {
        int iStart=0;
        int iEnd=0;
        boolean bFlag=true;

        while(iStart<iEnd)
        {
            if(Arr[iStart]!=Arr[iEnd])
            {
                bFlag=false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }

}

class program15
{
    public static void main(String Ar[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the size of Array you want to create ");
        int iSize=sobj.nextInt();
        
        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();

        obj.Display();

        boolean bRet=obj.CheckPalindrome();

        if(bRet==true)
        {
            System.out.println("Array is palindrome...");
        }
        else
        {
            System.out.println("Array is not palindrome...");
        }
    }
}