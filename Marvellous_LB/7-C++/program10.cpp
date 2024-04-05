#include<iostream>

using namespace std;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory for resource..."<<"\n";
            iSize=i;
            Arr= new int [iSize];  //Arr=(int *) malloc (sizeof (int) *iSize)
        }

        ~ArrayX()
        {
            cout<<"De-allocating the memory..."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements of Array : "<<"\n";

            for(int iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of Array : "<<"\n";

            for(int iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iLength=0;

    cout<<"Enter length of the array:\n"<<"\n";
    cin>>iLength;

    ArrayX * obj = new ArrayX(iLength);  //Dynamic

    obj->Accept();
    obj->Display();

    delete obj;
    return 0;
}