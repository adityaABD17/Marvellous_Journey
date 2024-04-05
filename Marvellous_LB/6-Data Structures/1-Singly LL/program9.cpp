#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


class SinglyLL
{
    // Charecterstics
    public:
    PNODE First; // PNODE Head
    int iCount; //Used for count the number of nodes ++ or --

    // Behaviour
    SinglyLL();

    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPosition(int,int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int);

    void Display();
};

/*Return_Value class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL:: SinglyLL()
{
    First=NULL;
    iCount=0;
}

void SinglyLL :: InsertFirst(int iNo)
{
    // Step 1 : Allocate memory for node
    PNODE newn=new NODE;

    //Step 2: Initialise the node 
    newn ->data=iNo;
    newn -> next =NULL;

    //Step 3: Check Whether the LL is empty 
    if(First==NULL)  // if(iCount==0)
    {
       First=newn;
       iCount++;
    }
    else  //If LL contains atleast one node
    {
       newn -> next=First;
       First = newn;
       iCount++;
    }
}
void SinglyLL :: InsertLast(int iNo)
{
      // Step 1 : Allocate memory for node
    PNODE newn=new NODE;

    //Step 2: Initialise the node 
    newn ->data=iNo;
    newn -> next =NULL;

    //Step 3: Check Whether the LL is empty 
    if(First==NULL)  // if(iCount==0)
    {
       First=newn;
       iCount++;
    }
    else  //If LL contains atleast one node
    {
        PNODE temp=First;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp ->next =newn;
        iCount++;
    }
}

void SinglyLL :: InsertAtPosition(int iNo,int iPos)
{}

void SinglyLL :: DeleteFirst()
{
    if(First==NULL)
    {
        return;
    }
    else if(First -> next ==NULL)
    {
        delete First;
        First = NULL;
        iCount --;
    }
    else
    {
        PNODE temp = First;
        First = First -> next;
        delete temp;
        iCount --;
    }
}
void SinglyLL :: DeleteLast()
{
    if(First==NULL)
    {
        return;
    }
    else if(First -> next ==NULL)
    {
        delete First;
        First = NULL;
        iCount --;
    }
    else
    {
        PNODE temp = First;
        while(temp -> next ->next!=NULL)
        {
            temp  = temp ->next;
        }

        delete temp -> next;
        temp -> next=NULL;

        iCount--;
    }
}
void SinglyLL :: DeleteAtPosition(int iPos)
{}

void SinglyLL :: Display()
{
    cout<<"Elements of link list are: "<<"\n";
    PNODE temp =First;

    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();

    obj1.DeleteFirst();

    obj1.Display();

    obj2.InsertLast(101);
    obj2.InsertLast(201);
    obj2.InsertLast(501);

    obj2.Display();

    obj2.DeleteLast();

    obj2.Display();


    cout<<"Number of nodes are: "<<obj2.iCount<<"\n";
    return 0;
}