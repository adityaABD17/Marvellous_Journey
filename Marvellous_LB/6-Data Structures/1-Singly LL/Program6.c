#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertAtFirst(PPNODE First, int iNo)
{
    PNODE newn=(PNODE) malloc (sizeof(NODE));

    newn -> data=iNo;
    newn ->next=NULL;

    if(First==NULL)
    {
        newn =*First;
    }

    else
    {
        newn ->next=*First;
        *First=newn;
    }
}

void InsertAtLast(PPNODE First,int iNo)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=*First;

    newn->data=iNo;
    newn->next=NULL;

    if(First==NULL)
    {
        newn=*First;
    }

    else if((*First)->next==NULL)
    {
        (*First) -> next=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newn;
    }
}

void InsertAtPos(PPNODE First,int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=*First;
    int nCnt=0,iCnt=0;

    nCnt=Count(*First);

    if((iPos<1)||(iPos>(nCnt+1)))
    {
        printf("Invalid position....\n");
    }

    if(iPos==1)
    {
        InsertAtFirst(First,iNo);
    }

    else if(iPos==(nCnt+1))
    {
        InsertAtLast(First,iNo);
    }

    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=iNo;
        newn->next=NULL;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp=*First;
    if(*First==NULL)
    {
        printf("There are no elements to delete...\n");
        return;
    }
    else if(temp->next==NULL)
    {
        free(*First);
        First=NULL;
        printf("Now there are no elements to delete..\n");
    }
    else
    {
       (*First)=(*First)->next;
       free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp=*First;

    if(*First==NULL)
    {
        printf("There are no elements to delete...\n");
        return;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next->next);
        temp->next=NULL;
    }
}

void DeleteAtPos(PPNODE First,int iPos)
{   
    PNODE temp=*First;
    int nCnt=0,iCnt=0;

    nCnt=Count(*First);

    if(iPos==1)
    {
        DeleteFirst(First);
    }
    else if(iPos==(nCnt))
    {
        DeleteLast(First);
    }
    else
    {
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next);
    }
}

void Display(PNODE First)
{
    int iCnt=0;
  
        printf("Elements in the linked list are:\n");
        while(First!=NULL)
        {
            printf("| %d |->",First->data);
            First=First->next;
        }
        printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt=0,nCnt=0;
  
        while(First!=NULL)
        {
            nCnt++;
            First=First->next;
        }

        return nCnt;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertAtFirst(&Head,21);
    InsertAtFirst(&Head,11);
    InsertAtLast(&Head,51);

    iRet= Count(Head);
    printf("Number of elements in the linked list : %d\n",iRet);

    Display(Head);

    InsertAtPos(&Head,100,3);

    Display(Head);

    DeleteAtPos(&Head,3);

    iRet=Count(Head);
    printf("Number of elements in the linked list : %d\n",iRet);
    Display(Head);

    return 0;
}