#include<iostream>
using namespace std;

class Arithmatic
{
   public:
    int iVal1;
    int iVal2;

     Arithmatic()   //Default constructor
     {
        iVal1=0;
        iVal2=0;
     }

     Arithmatic(int A, int B) // Parameterised constructor
    {
        iVal1=A;
        iVal2=B;
    }

    int Addition()
    {
        int iAdd=0;

        iAdd=iVal1+iVal2;

        return iAdd;
    }
};


int main()
{
    int iRet=0;

    Arithmatic obj1;
    Arithmatic obj2(10,11);
    Arithmatic obj3(20,21);

    iRet=obj1.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

    iRet=obj2.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

    iRet=obj3.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}