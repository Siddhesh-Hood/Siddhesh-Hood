//Problems On Data Strcutures.
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE Head = NULL;
    //struct node *Head = NULL;   --->//pointer ---(points to 1st node of linked list that will be created in future).
   
    NODE obj;
   //struct node obj;

    return 0;
}