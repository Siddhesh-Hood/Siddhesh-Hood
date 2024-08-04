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
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;        
}

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
{
    PNODE newn = NULL;
    PNODE temp = First;

    newn = new NODE;    //malloc

    newn->data = No;
    newn->next = NULL;

    if(First  == NULL)        //if(Count == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL::InsertAtPos(int No, int iPos)
{}

void SinglyLL::DeleteFirt(int iNo)
{
    PNODE temp = First;
    
    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {

        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyLL::DeleteLast(int iNo)
{
    PNODE temp = First;
    
    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {

        delete First;
        First = NULL;
    }
    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
}

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

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Elements are:"<<iRet<<endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Elements are:"<<iRet<<endl;

    obj.DeleteFirt(11);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Elements are:"<<iRet<<endl;

    obj.DeleteLast(121);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Elements are:"<<iRet<<endl;

    return 0;
}