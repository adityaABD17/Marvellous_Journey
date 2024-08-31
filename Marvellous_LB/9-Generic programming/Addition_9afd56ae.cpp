#include<iostream>
using namespace std;

double Addition(double a ,double b)
{
    double Add=a+b;

    return Add;
}

int main()
{
    double iNo1=10.9,iNo2=20.8,iRet=0;

    iRet=Addition(iNo1,iNo2);

    cout<<"Addition of numbers is :"<<iRet<<"\n";

    return 0;
}