#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{   

    PNODE newn =NULL;              

    
    newn = (PNODE)malloc(sizeof(NODE));

    
    newn->data = No;  // inserts value of no in dynamic memo linklist
    newn->next = NULL;

    
    if(*First == NULL)
    {
        *First = newn;
    }
    else            
    {
        newn->next = *First;
        *First =newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\t", First->data);
        First = First->next;
    }
}
int main()
{
    PNODE Head = NULL;   //pointer named Head  (has address of 1st node)

    InsertFirst(&Head,101);
    InsertFirst(&Head,51); // InsertFirst(60,51);  ------ //passing the &Head (*Head) i.e address of Head
    InsertFirst(&Head,21); 
    InsertFirst(&Head,11);    

    Display(Head);   //Display(100)

    return 0;
}