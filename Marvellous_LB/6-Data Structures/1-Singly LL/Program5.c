#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE) malloc (sizeof(NODE));         // 1. Allocate memory
    
    newn -> data = no;
    newn -> next = NULL;

    if(*First == NULL)      //If linked list is empty
    {
        *First = newn;
    }
    else                    //If linked list contains atleast one node
    {
        newn ->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE) malloc (sizeof(NODE));         // 1. Allocate memory
    PNODE temp= *First;

    newn -> data = no;
    newn -> next = NULL;

    if(*First == NULL)      //If linked list is empty
    {
        *First = newn;
    }
    else                    //If linked list contains atleast one node
    {
        while(temp -> next !=NULL)
        {
            temp = temp -> next;
        }
        temp ->next=newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the linked List are : \n");

    while(First !=NULL)
    {
        printf("| %d | ->",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}


int main()
{
    PNODE Head=NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);


    InsertLast(&Head,101);
    InsertLast(&Head,111);

    Display(Head);
    return 0;
}