#include<iostream>
using namespace std;

//Problems on Numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo=i;
        }


        int Factorial()
        {
            int iCnt=0, iFact=1;
           for(iCnt=1;iCnt<=iNo;iCnt++)
           {
            iFact*=iCnt;
           }

           return iFact;
        }
};

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers obj (iValue);

    iRet= obj.Factorial();

    cout<<"Factorial of given number is :"<<iRet<<"\n";
    return 0;
}