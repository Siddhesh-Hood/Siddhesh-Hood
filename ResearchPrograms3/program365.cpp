#include<iostream> //Singly Linear Linked List Using C++.
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirt(int iNo);
        void DeleteLast(int iNo);
        void DeleteAtPos(int iPos);
};

void SinglyLL::Display()
{}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;    //malloc

    newn->data = No;
    newn->next = NULL;

    if(First  == NULL)        //if(Count == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL::InsertLast(int No)
{}

void SinglyLL::InsertAtPos(int No, int iPos)
{}

void SinglyLL::DeleteFirt(int iNo)
{}

void SinglyLL::DeleteLast(int iNo)
{}

void SinglyLL::DeleteAtPos(int iPos)
{}

SinglyLL::SinglyLL()
{
    cout<<"Inside Connstructor\n";
    First = NULL;
    iCount = 0;
}


int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    iRet = obj.Count();

    cout<<"Number of Elements are:"<<iRet<<endl;

    return 0;
}