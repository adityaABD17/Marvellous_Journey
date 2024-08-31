#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class singlyCL
{
    public:
        PNODE First;
        PNODE Last;

        singlyCL();
        
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

/*
    Return_Value Class_Name ::Function_Name()
    {

    }

*/

singlyCL:: singlyCL()
{
    First=NULL;
    Last=NULL;
}


void singlyCL::InsertFirst(int no)
{
    // PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn=new NODE;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

void singlyCL::InsertLast(int no)
{
    // PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn= new NODE;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        (Last) -> next = newn;
        Last = newn;
        (Last)->next = First;
    }
}

void singlyCL::Display()
{
    PNODE temp=First;
    cout<<"Elements of Linked list are :"<< "\n";

    do
    {
        cout<<"| "<< First->data<< "|->";
        temp = temp -> next;
    }while(temp != Last->next);
    cout<<"\n";
}

int singlyCL::Count()
{
    PNODE temp=First;
    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    } while(temp != Last->next);
    return iCnt;
}

void singlyCL::DeleteFirst()
{
    PNODE temp=First;

    if((First==NULL)&&(Last==NULL))  //EmptyLL
    {
        cout<<"There are no nodes to delete..."<<"\n";
        return;
    }
    else if((First)==(Last))  //Single node in LL
    {
        // free(*First);
        delete First;

        First=NULL;
        Last=NULL;
    }
    else
    {
        (First)=(First)->next;
        // free((*Last)->next);
        delete temp;
        (Last)->next=First;
        /*  OR
        
        *First=(*First)->next;
        free(temp);
        (*Last)->next=*First;

        */
    }
}

void singlyCL::DeleteLast()
{
    PNODE temp=First;

    if((First==NULL)&&(Last==NULL))  //EmptyLL
    {
        cout<<"There are no nodes to delete...\n";
        return;
    }
    else if((First)==(Last))  //Single node in LL
    {
        // free(First);
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        while(temp->next!=Last)
        {
            temp=temp->next;
        }
        // free(*Last);  //free(temp->next);
        delete Last;
        Last=temp;
        Last->next=First;
    }
}

void singlyCL::InsertAtPos(int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=First;
  
    int nCnt=0,iCnt=0;
    nCnt=Count();


    if((iPos<1)||(iPos>(nCnt+1)))
    {
        cout<<"Invalid Position..." << "\n";
        return;
    }
    if(iPos==1)
    {
        InsertFirst(iNo);
    }
    else if(iPos==(nCnt+1))
    {
        InsertLast(iNo);
    }
    else
    {
        // newn=(PNODE)malloc(sizeof(NODE));
        newn=new NODE;
        newn->data=iNo;
        newn->next=NULL;


        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp=temp->next;
        }
        
        newn->next=temp->next;
        temp->next=newn;
    }
}

void singlyCL::DeleteAtPos(int iPos)
{
    PNODE temp1=First;
    PNODE temp2=NULL;

    int nCnt=0,iCnt=0;
    nCnt=Count();


    if((iPos<1)||(iPos>nCnt))
    {
        cout<<"Invalid Position...\n";
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==nCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp1=temp1->next;
        }
        
        temp2=temp1->next;

        temp1->next=temp2->next;

        // free(temp2);
        delete temp2;

    }
}

int main()
{
    singlyCL obj;
    int iRet = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst( 21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.InsertAtPos(105,5);

    obj.Display();
    iRet = obj.Count();
    printf("Number of elements are : %d\n",iRet);

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    printf("Number of elements are : %d\n",iRet);

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();


    return 0;
}