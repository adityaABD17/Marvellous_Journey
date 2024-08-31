#include<iostream>
using namespace std;

template <class T>
T Addition(T a  ,T b)
{
    T Add=a+b;

    return Add;
}

int main()
{
    double iNo1=10.9,iNo2=20.8,iRet=0;
    iRet=Addition(iNo1,iNo2);
    cout<<"Addition of numbers is :"<<iRet<<"\n";
    
    int x=10,y=20,iRet=0;
    iRet=Addition(x,y);
    cout<<"Addition of numbers is :"<<iRet<<"\n";

    return 0;
}