#include<stdio.h>
#include<stblib.h>

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

    PNODE newn =NULL;              //created pointer newn

    //Step1 : Allocate dynamic memory for New node.
    newn = (PNODE)malloc(sizeof(NODE));

    //Step2 : Initialise the new node;
    newn->data = No;
    newn->next = NULL;

    //Step3 : Check is Linked List Empty. 
    if(*First == Null)
    {
        *First = newn;
    }
    else            // If linked list contains at least one node in it.
    {
        newn->next = *First;
        *First =newn;
    }
}

void Display(PNODE First)
{

}
int main()
{
    PNODE Head = NULL;   //pointer named Head  (has address of 1st node)

    InsertFirst(&Head,51);    //passing the &Head (*Head) i.e address of Head
    InsertFirst(&Head,21); 
    InsertFirst(&Head,11); 

    Display(Head);

    return 0;
}