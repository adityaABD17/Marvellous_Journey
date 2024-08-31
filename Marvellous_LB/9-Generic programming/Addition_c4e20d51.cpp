#include<iostream>
using namespace std;

int Addition(int a ,int b)
{
    int Add=a+b;

    return Add;
}

int main()
{
    int iNo1=10,iNo2=20,iRet=0;

    iRet=Addition(iNo1,iNo2);

    cout<<"Addition of numbers is :"<<iRet<<"\n";

    return 0;
}