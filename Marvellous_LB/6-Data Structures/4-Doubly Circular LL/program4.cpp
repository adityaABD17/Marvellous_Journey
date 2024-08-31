#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int Data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        int nCnt=0;

        DoublyCL();

        void InsertAtFirst(int iNo);
        void InsertAtLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
};

DoublyCL::DoublyCL()
{
    First=NULL;
    Last=NULL;
}

void DoublyCL::InsertAtFirst(int iData)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->Data=iData;
    newn->next=NULL;
    newn->prev=NULL;

    if(((First)==NULL)&&((Last)==NULL))
    {
        First=newn;
        Last=newn;
        nCnt++;
        
    }
    else
    {
        newn->next=First;
        (First)->prev=newn;
        First=newn;
        nCnt++;
    }
    (First)->prev=Last;
    (Last)->next=First;
}
void DoublyCL::InsertAtLast(int iData)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->Data=iData;
    newn->next=NULL;
    newn->prev=NULL;

    if(((First)==NULL)&&((Last)==NULL))
    {
        First=newn;
        Last=newn;
        nCnt++;
    }
    else
    {
        (Last)->next=newn;
        newn->prev=Last;
        Last=newn;
        nCnt++;
    }
    (First)->prev=Last;
    (Last)->next=First;
}

void DoublyCL::Display()
{
    if((First==NULL)&&(Last==NULL))
    {
        printf("Linked list is empty...");
        return;
    }
    printf("Element of the linked list are :\n");
    
    do
    {
        printf("| %d |<->",First->Data);
        First=First->next;
    }while(First!=Last->next);
    printf("\n");
}

void DoublyCL::DeleteFirst()
{
    if(((First)==NULL)&&((Last)==NULL))
    {
        return;
    }
    else if((First==Last))
    {
        free(First);
        First=NULL;
        Last=NULL;
        nCnt--;
    }
    else
    {
        First=(First)->next;
        free((Last)->next);
        (First)->prev=Last;
        (Last)->next=First;
        nCnt--;
    }
}

void DoublyCL::DeleteLast()
{
    if(((First)==NULL)&&((Last)==NULL))
    {
        return;
    }
    else if((First==Last))
    {
        free(First);
        First=NULL;
        Last=NULL;
        nCnt--;
    }
    else
    {
        Last=(Last)->prev;
        free((First)->prev);
        (First)->prev=Last;
        (Last)->next=First;
        nCnt--;
    }

}

void DoublyCL::InsertAtPos(int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=First;
    int iCnt=0;


    if(iPos==1)
    {
        InsertAtFirst(iNo);
    }
    else if(iPos==(nCnt+1))
    {
        InsertAtLast(iNo);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->Data=iNo;
        newn->next=NULL;
        newn->prev=NULL;

        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        
        temp->next=newn;
        newn->prev=temp;
        nCnt++;
    }
}

void DoublyCL::DeleteAtPos(int iPos)
{
    PNODE temp=First;
    int iCnt=0;

    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==(nCnt+1))
    {
        DeleteLast();
    }
    else
    {
        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
        nCnt--;
    }
}

int main()
{
    DoublyCL obj;

    obj.InsertAtFirst(11);
    obj.InsertAtLast(21);
    obj.InsertAtLast(51);
    obj.InsertAtLast(101);
    obj.InsertAtLast(111);
    obj.InsertAtLast(121);

    obj.Display();
    
    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    obj.InsertAtPos(1000,4);

    obj.Display();

    obj.DeleteAtPos(4);

    obj.Display();

    return 0;
}