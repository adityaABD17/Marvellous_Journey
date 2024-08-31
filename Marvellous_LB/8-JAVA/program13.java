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

    public int Addition()
    {
        int iSum=0;
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            iSum+=Arr[iCnt];
        }
        return iSum;
    }
}

class program13
{
    public static void main(String Ar[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the size of Array you want to create ");
        int iSize=sobj.nextInt();
        
        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();

        obj.Display();

        int iRet=obj.Addition();

        System.out.println("Addition of all elements is :"+iRet);
    }
}