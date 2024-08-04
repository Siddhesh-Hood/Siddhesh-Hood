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
{}

int Count(PNODE First)
{
    return 0;
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
{}

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

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    return 0;
}