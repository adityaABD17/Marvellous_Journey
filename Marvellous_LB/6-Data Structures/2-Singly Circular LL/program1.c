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

void InsertFirst(PPNODE First,PPNODE Last,int iNo)
{
    PNODE newn = (PNODE) malloc (sizeof(NODE));

    newn -> data =iNo;
    newn ->next =NULL;

    if((*First==NULL) && (*Last==NULL))
    {
        *First= *Last= newn;
        (*Last) -> next = *First;
    }
    else
    {
        newn ->next = *First;
        *First= newn;
        (*Last) -> next = *First;
    }
}

void InsertLast(PPNODE First,PPNODE Last,int iNo)
{
    PNODE newn = (PNODE) malloc (sizeof(NODE));

    newn -> data =iNo;
    newn ->next =NULL;

    if((*First==NULL) && (*Last==NULL))
    {
        *First= *Last= newn;
        (*Last) -> next = *First;
    }
    else
    {
        (*Last) -> next=newn;
        *Last=newn;
        (*Last)->next =*First;
    }
}



void Display(PNODE First,PNODE Last)
{
    printf("Elements of linked list are : \n");

    do
    {
        printf("| %d |->",First->data);
        First=First -> next;
    } while (First != Last -> next);

    printf("\n");
    
}

int Count(PNODE First,PNODE Last)
{
   int iCount=0;

    do
    {
        iCount++;
        First=First -> next;
    } while (First != Last -> next);

    return iCount;
    
}

int main()
{
    PNODE Head =NULL;
    PNODE Tail=NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,501);
    InsertLast(&Head,&Tail,601);


    Display(Head,Tail);

    int iRet= Count(Head,Tail);

    printf("Total number of nodes are : %d",iRet);

    return 0;
}