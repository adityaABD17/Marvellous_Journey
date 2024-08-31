#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1,int iNo2)
{
    int Frequency1[10]={0};
    int Frequency2[10]={0};
    bool Flag=true;
    while(iNo1!=0)
    {
        Frequency1[(iNo1%10)]++;
        iNo1=iNo1/10;
    }

    
    while(iNo2!=0)
    {
        Frequency2[(iNo2%10)]++;
        iNo2=iNo2/10;
    }

    for(int iCnt=0;iCnt<10;iCnt++)
    {
        if(Frequency1[iCnt]!=Frequency2[iCnt])
        {
            Flag=false;
            break;
        }
    }

    return Flag;
}

int main()
{
    int iNo1=0,iNo2=2;

    cout<<"Enter First number : "<<"\n";
    cin>>iNo1;

    cout<<"Enter second number : "<<"\n";
    cin>>iNo2;

    bool bRet=CheckAnagram(iNo1,iNo2);

    if(bRet==true)
    {
        cout<<"Numbers are anagrams"<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagrams"<<"\n";
    }
}