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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        (*Last) -> next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    // PNODE temp=*First;

    if((*First==NULL)&&(*Last==NULL))  //EmptyLL
    {
        printf("There are no nodes to delete...\n");
        return;
    }
    else if((*First)==(*Last))  //Single node in LL
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        (*First)=(*First)->next;
        free((*Last)->next);
        (*Last)->next=*First;
        /*  OR
        
        *First=(*First)->next;
        free(temp);
        (*Last)->next=*First;

        */
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp=*First;

    if((*First==NULL)&&(*Last==NULL))  //EmptyLL
    {
        printf("There are no nodes to delete...\n");
        return;
    }
    else if((*First)==(*Last))  //Single node in LL
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        while(temp->next!=(*Last))
        {
            temp=temp->next;
        }
        free(*Last);  //free(temp->next);
        *Last=temp;
        (*Last)->next=*First;
    }
}

void InsertAtPos(PPNODE First,PPNODE Last,int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=*First;
  
    int nCnt=0,iCnt=0;
    nCnt=Count(*First,*Last);


    if((iPos<1)||(iPos>(nCnt+1)))
    {
        printf("Invalid Position...\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(First,Last,iNo);
    }
    else if(iPos==(nCnt+1))
    {
        InsertLast(First,Last,iNo);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
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

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    PNODE temp1=*First;
    PNODE temp2=NULL;

    int nCnt=0,iCnt=0;
    nCnt=Count(*First,*Last);


    if((iPos<1)||(iPos>nCnt))
    {
        printf("Invalid Position...\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos==nCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp1=temp1->next;
        }
        
        temp2=temp1->next;

        temp1->next=temp2->next;

        free(temp2);

    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    
    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    InsertAtPos(&Head,&Tail,105,5);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&Head,&Tail,5);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    DeleteLast(&Head,&Tail);

    Display(Head,Tail);


    return 0;
}