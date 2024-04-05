#include<stdio.h>
#include<Stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      // X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int no)
{
    PNODE newn= (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;   // X
        *First=newn;
    }
}

void InsertLast(PPNODE First , int no)
{
    PNODE newn= (PNODE)malloc(sizeof(NODE));
    PNODE temp=*First;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;        // X

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp -> next;
        }

        temp -> next=newn;
        newn ->prev =temp ->next;       // X
    }
}

void Display(PNODE First)
{
    printf("Elements of the linked list are\n");

    while(First !=NULL)
    {
        printf("| %d |<=>",First->data);
        First=First->next;
    }
    printf("NULL\n");
}

void DeleteFirst(PPNODE First)
{
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next ==NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        (*First)= (*First)->next;
        free((*First)->prev);                   //  X
        (*First) ->prev=NULL;                   //  X
    }
}

void DeleteAtLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First ==NULL)       // LL is empty
    {
        return;
    }

    else if((*First)->next == NULL)
    {

    }

    else
    {
        while((temp)->next ->next ==NULL)
        {
            temp=
        }
    }
}

int Count(PNODE First)
{
   int iCnt=0;

    while(First !=NULL)
    {
        iCnt++;
        First=First->next;
    }

    return iCnt;
}


int main()
{
    PNODE Head= NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);
    int iRet=Count(Head);

    printf("Number of elements are : %d \n",iRet);
   

    return 0;
}