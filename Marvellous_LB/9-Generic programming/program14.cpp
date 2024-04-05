#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T>* newn = new struct node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct node <T>* temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL<T> :: Count()
{
    struct node <T>* temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    int iRet =0;
    SinglyLL <int>iobj;
    
    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);

    iobj.Display();

    iRet=iobj.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    SinglyLL <char>cobj;
    
    cobj.InsertFirst('d');
    cobj.InsertFirst('c');
    cobj.InsertFirst('b');
    cobj.InsertFirst('a');

    cobj.Display();

    iRet=cobj.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <float>fobj;
    
    fobj.InsertFirst(44.4f);
    fobj.InsertFirst(33.3f);
    fobj.InsertFirst(22.2f);
    fobj.InsertFirst(11.1f);

    fobj.Display();

    iRet=fobj.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <double>dobj;
    
    dobj.InsertFirst(44.4f);
    dobj.InsertFirst(33.3f);
    dobj.InsertFirst(22.2f);
    dobj.InsertFirst(11.1f);

    dobj.Display();

    iRet=dobj.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";
    

    return 0;
}