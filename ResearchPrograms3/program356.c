#include<stdio.h> //Dobuly Linear Linked List
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;  //$(change in code)
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First)
{
    printf("\nNULL");
    while(First != NULL)
    {
        printf("| %d |<=>",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  //$(change in code)

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; //$(change in code)

        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  //$(change in code)

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        PNODE temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp-> next = newn;
        newn-> prev = temp; //$(change in code)
    }
}

void InsertAtPos(PPNODE First, int No,int iPos)
{}

void DeleteFirst(PPNODE First)
{}

void DeleteLast(PPNODE First)
{}

void DeleteAtPos(PPNODE First, int iPos)
{}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements are : %d\n",iRet); 

    return 0;
}