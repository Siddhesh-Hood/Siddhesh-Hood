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

int main()
{
    PNODE Head = NULL;

    return 0;
}