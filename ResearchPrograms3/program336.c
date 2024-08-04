#include<stdio.h>
#include<stblib.h>

struct node
{
    int data;
    struct node *next;
};
//NODE , PNODE , PPNODE;

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


int main()
{
    PNODE Head = NULL;   //pointer named Head  (has address of 1st node)

    return 0;
}



































/*
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

int main()
{
    PNODE Head = NULL;   //pointer named Head  (has address of 1st node)

    return 0;
}
*/