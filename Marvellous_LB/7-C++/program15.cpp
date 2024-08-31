#include<iostream>
using namespace std;

// INPUT:77889922
// OUTPUT:
//  7-2 times
//  8-2 Times
//  9- 2 times
//  2-2 times
class DigitX
{
    int iNo;
    public:
        DigitX()
        {
            iNo=0;
        }

        DigitX(int i)
        {
            iNo=i;
        }

        void DisplayFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10]={0};

            while(iTemp!=0)
            {
                iDigit=iTemp%10;
                Frequency[iDigit]++;
                iTemp=iTemp/10;
            }

            for(int iCnt=0;iCnt<10;iCnt++)
            {
                if(Frequency[iCnt]>0)
                {
                    cout<<iCnt<<" occured "<<Frequency[iCnt]<<" times "<<"\n";
                }
            }
        }
};

int main()
{
    int iValue=0;

    cout<<"Enter a number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();
    return 0;
}