#include<stdio.h>
#include<stdlib.h>

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

void InsertAtFirst(PPNODE First,PPNODE Last,int iData)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->Data=iData;
    newn->next=NULL;
    newn->prev=NULL;

    if(((*First)==NULL)&&((*Last)==NULL))
    {
        *First=newn;
        *Last=newn;
        
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
    }
    (*First)->prev=*Last;
    (*Last)->next=*First;
}
void InsertAtLast(PPNODE First,PPNODE Last,int iData)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->Data=iData;
    newn->next=NULL;
    newn->prev=NULL;

    if(((*First)==NULL)&&((*Last)==NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        (*Last)->next=newn;
        newn->prev=*Last;
        *Last=newn;
    }
    (*First)->prev=*Last;
    (*Last)->next=*First;
}

void Display(PNODE First,PNODE Last)
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

int Count(PNODE First,PNODE Last)
{
    int iCnt=0;
    do
    {
        iCnt++;
        First=First->next;
    }while(First!=Last->next);
    return iCnt;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(((*First)==NULL)&&((*Last)==NULL))
    {
        return;
    }
    else if((*First==*Last))
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        *First=(*First)->next;
        free((*Last)->next);
        (*First)->prev=*Last;
        (*Last)->next=*First;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    if(((*First)==NULL)&&((*Last)==NULL))
    {
        return;
    }
    else if((*First==*Last))
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        *Last=(*Last)->prev;
        free((*First)->prev);
        (*First)->prev=*Last;
        (*Last)->next=*First;
    }

}

int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;

    InsertAtFirst(&Head,&Tail,11);
    InsertAtLast(&Head,&Tail,21);
    InsertAtLast(&Head,&Tail,51);
    InsertAtLast(&Head,&Tail,101);
    InsertAtLast(&Head,&Tail,111);
    InsertAtLast(&Head,&Tail,121);

    Display(Head,Tail);

    DeleteFirst(&Head,&Tail);
    DeleteLast(&Head,&Tail);

    Display(Head,Tail);

    return 0;
}