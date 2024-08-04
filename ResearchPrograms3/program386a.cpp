#include<iostream>
using namespace std;

template <class T>
struct nodeSL
{
    int data;
    struct nodeSL *next;
};

template <class T>
class SinglyCL
{
    private:
        struct nodeSL<T> * First;
        struct nodeSL<T> *Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    struct nodeSL<T> * temp = First;

    if((First == NULL) && (Last == NULL))
    {
        cout << "LinkedList is empty" << endl;
        return;
    }

    do
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp -> next;
    }while(temp != Last->next);

    cout << endl;
}

template <class T>
int SinglyCL<T>::Count()
{
    struct nodeSL<T> * temp = First;
    int iCount = 0;

    if((First == NULL) && (Last == NULL))
    {
        return 0;
    }

    do
    {
        iCount++;
        temp = temp -> next;
    }while(temp != Last->next);

    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = new nodeSL<T>;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;

    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = new nodeSL<T> *;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last -> next = newn;
        Last = newn;
    }
    Last->next = First;

    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp = First;
    struct nodeSL<T> * newn = new nodeSL<T> ;

    newn->data = No;
    newn->next = NULL;

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
        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp -> next = newn;
    }

    iCount++;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node 
    {
        First = First -> next;
        delete Last->next;
        Last -> next = First;
    }

    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node 
    {
        while(temp ->next != Last)
        {
            temp = temp -> next;
        }

        delete Last;
        Last = temp;

        Last->next = First;
    }

    iCount--;
}


template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp1 = First;
    struct nodeSL<T> * temp2 = NULL;

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
        for(i = 1; i < iPos -1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1 -> next;
        temp1 -> next = temp2 -> next;
        delete temp2;
    }

    iCount--;
}

int main()
{
    SinglyCL<int> *illobj = new SinglyCL<int>();

    illobj->InsertFirst(51);
    illobj->InsertFirst(21);
    illobj->InsertFirst(11);
    
    illobj->Display();
    iRet = illobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    illobj->InsertLast(101);
    illobj->InsertLast(111);
    illobj->InsertLast(121);
    
    illobj->Display();
    iRet = illobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    illobj->InsertAtPos(105,5);
    illobj->Display();
    iRet = illobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    illobj->DeleteAtPos(5);
    illobj->Display();
    iRet = illobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    illobj->DeleteFirst();
    illobj->Display();
    iRet = illobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    illobj->DeleteLast();
    illobj->Display();
    iRet = illobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    return 0;
}