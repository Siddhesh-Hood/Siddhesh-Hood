#include<stdio.h> //Singly Circular LL
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;   
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        (*Last)->next = newn;
        *Last = newn;
    }
}

void Display(PNODE First , PNODE Last)
{
    PNODE temp = First;
    do 
    {
        printf("| %d | ->",temp->data);
        temp = temp ->next;
    }
    while(temp != Last);

    printf("\n");
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    Display(Head, Tail);
    
    InsertFirst(&Head,&Tail,51); 
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail, 101);
    InsertLast(&Head,&Tail, 111);
    InsertLast(&Head,&Tail, 121);

    Display(Head, Tail);

    return 0;
}