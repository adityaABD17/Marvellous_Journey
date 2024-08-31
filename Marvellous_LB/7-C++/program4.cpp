#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    int Addition(int iVal1, int iVal2)
    {
        int iAns=iVal1+iVal2;

        return iAns;
    }
};

int main()
{
    int iNo1=0, iNo2=0 , iAns=0;

    cout<<"Enter first number : \n";
    cin>>iNo1;

    cout<<"Enter second number : \n";
    cin>>iNo2;

    Arithmatic obj;
    iAns=obj.Addition(iNo1,iNo2);

    cout<<"Addition is :"<<iAns<< "\n";

    return 0;
}