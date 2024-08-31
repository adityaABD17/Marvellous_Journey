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

    nCnt=Count(First);

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

    int iChoice=0,iPos=0,iRet=0,iNo=0;

    printf("Welcome to data structure application...\n");

    while(1)
    {
        printf("----------------------------------------\n");
        printf("Please select the desired option : \n\n");
        printf("1:Insert new node at first postion.\n");
        printf("2:Insert new node at last postion.\n");
        printf("3:Insert new node at given position.\n");
        printf("4:Delete node at First postion.\n");
        printf("5:Delete node at last postion.\n");
        printf("6:Delete node at given postion.\n");
        printf("7:Display the linked list\n");
        printf("8:Count numbers of nodes in the linked list.\n");
        printf("9:Exit");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",iNo);

                InsertFirst(&Head,iNo);
                break;
            case 2:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",iNo);

                InsertAtLast(&Head,iNo);
                break;
            case 3:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",iNo);

                printf("Enter the position : \n");
                scanf("%d",&iPos);

                InsertAtPos(&Head,iNo,iPos);
                break;
            case 4:
                DeleteFirst(&Head);
                break;
            case 5:
                DeleteLast(&Head);
                break;
            case 6:
                printf("Enter the position : \n");
                scanf("%d",iPos);

                DeleteAtPos(&Head,iPos);
                break;
            case 7:
                Display(Head);
                break;
            case 8:
                iRet=Count(Head);
                printf("Number of nodes in the linked list are  : %d\n",iRet);
                break;
            case 9:
                printf("Thank you for using this application...");
                break;

            default:
            printf("Invalid option...\n");
        }
        
        printf("----------------------------------------\n");
    }

    return 0;
}