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

class MarvellousLB: public ArrayX
{
    public:

    MarvellousLB(int i): ArrayX(i)
    { }
    int Minimum()
        {
            int iMin=Arr[0];

            for(int iCnt=0;iCnt<iSize;iCnt++)
            {
                if(Arr[iCnt]<iMin)
                {
                    iMin=Arr[iCnt];
                }
            }
            return iMin;

        }
};

int main()
{
    int iLength=0;

    cout<<"Enter length of the array:\n"<<"\n";
    cin>>iLength;

    MarvellousLB * obj=new MarvellousLB(iLength);

    obj->Accept();
    obj->Display();

    int iRet=obj->Minimum();

    cout<<"Minimun of the array is : "<<iRet<<"\n";

    delete obj;
    return 0;
}