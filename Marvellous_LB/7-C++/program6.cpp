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


        void Function()
        {
            // Logic
        }
};

int main()
{
    int iValue=0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers obj (iValue);

    obj.Function();
    return 0;
}