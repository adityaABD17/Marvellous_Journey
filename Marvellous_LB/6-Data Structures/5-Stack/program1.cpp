#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Stack
{
    public:
        struct node * First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int iNo);     //Insert
        int Pop();              //Delete
        void Display();
};

Stack::Stack()
{
    First==NULL;
    iCount=0;
}

bool Stack:: IsStackEmpty()
{
    if(iCount==0)
    {
        return true;
    }
    else{
        return false;
    }
}

void Stack::Push(int iNo)
{
    struct node *newn = new node;

    newn->data=iNo;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First=newn;
    }
    iCount++;
    cout<<iNo<<" gets pushed sucessfully in the stack"<<"\n";
}

int Stack::Pop()
{
    if(First==NULL)
    {
        cout<<"Unable to pos as stack is empty..."<<"\n";
        return -1;
    }
    else
    {
        int iValue=First->data;
        struct node *temp=First;

        First=First->next;
        delete temp;

        iCount--;

        return iValue;
    }
}

void Stack::Display()
{
    if(First==NULL)
    {
        cout<<"Stack is empty.."<<"\n";
    }
    else
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node *temp=First;
        while(temp!=NULL)
        {
            cout<<"| "<<temp->data<<" |->";
            temp=temp->next;
        }
        cout<<" NULL"<<"\n";
    }
}

int main()
{
    Stack obj;

    obj.Push(11);
    obj.Push(11);
    obj.Push(11);
    obj.Push(11);

    obj.Display();

    int iRet=obj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";
    
    iRet=obj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";

    obj.Display();

    return 0;
}