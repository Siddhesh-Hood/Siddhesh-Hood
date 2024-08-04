//Doubly Linear Linked List Using C++.

#include<iostream>
using namespace std;
template <class T>
struct nodeDL
{
    int data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDL<T> * First;
        int iCount;

    public:
        DoublyLL()
        {
            First = NULL;
            iCount = 0;
        }

        void Display();
        int Count()
        {
            return iCount;
        }

        void InsertFirst(T No);
        void InsertLast(T No);        
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDL<T> * temp = First;
    cout<< "NULL <=> ";
    while(temp != NULL)
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDL<T> * newn = new nodeDL<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No)
{
   struct nodeDL<T> *newn = new nodeDL<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
       struct nodeDL<T> * temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid position" << endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeDL<T> * newn = new nodeDL<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        struct nodeDL<T> * temp = First;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }

    struct nodeDL<T> * temp = First;
    First = First->next;
    if(First != NULL)
    {
        First->prev = NULL;
    }
    delete temp;
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(First == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }

    if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        struct nodeDL<T> * temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid position" << endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeDL<T> * temp = First;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        struct nodeDL<T> * temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        delete temp2;
        iCount--;
    }
}

int main()
{
    cout<<"===============DOUBLY LINEAR LINK LIST===============\n";
    cout<<"---------------Link List Of Integer---------------\n";

    DoublyLL<int> *iobj = new DoublyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertAtPos(105,5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteAtPos(5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    return 0;
}