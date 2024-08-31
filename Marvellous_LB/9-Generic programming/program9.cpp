#include<iostream>
using namespace std;

template<class T>

T Addition(T Arr[],int iSize)
{
    int iCnt=0;
    T Add=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        Add=Add+Arr[iCnt];
    }
    return Add;
}

int main()
{
    int Data[]={10,20,30,40,50,60};

    int iRet=Addition(Data,6);

    cout<<"Addition of elements is:"<<iRet<<"\n";

    float Dataf[]={10.2,11.2,12.1,23.3};

    float fRet=Addition(Dataf,4);
    cout<<"Addition of elements is:"<<fRet<<"\n";

    return 0;
}