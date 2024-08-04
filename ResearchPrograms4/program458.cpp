#include<iostream>//GenericDobulyCircularLL
using namespace std;

template <class T>
struct nodeDC
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDC<T> *  First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T> :: Display()
{   
    if(First ==NULL && Last ==NULL )
    {
        cout<<"Linked List Is Empty\n";
        return;
    }

    do
    {
        cout<<"| "<<First->data<<"| <=>";
        First = First -> next;
    }while(First != Last->next);

    cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

     if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn ->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;
    
    iCount++;
}

template <class T>
void DoublyCL<T> :: InsertLast(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

     if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev=Last;
        Last = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T No,int iPos)
{
    struct nodeDC<T> * temp = NULL;
    struct nodeDC<T> * newn = NULL;  int i;

    newn = new nodeDC<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        for(i = 1; i < iPos - 1; i++)
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
void DoublyCL<T> :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))  //Empty LL
    {
        return;
    }
    else if(First == Last)  //Single node
    {
        delete First;
        First = NULL;
        Last =NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        
        First->prev = Last;
        Last->next = First;

    }
    iCount--;
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))  //Empty LL
    {
        return;
    }
    else if(First == Last)  //Single node
    {
        delete First;
        First = NULL;
        Last =NULL;
    }
    else
    {
        Last = Last->prev;
        delete First->prev;

        Last ->next =First;
        First->prev = Last;
    }
    iCount--;
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{
    struct nodeDC<T> * temp = NULL;
    int i =0;


    if((iPos < 1) || (iPos > iCount) )
    {
        cout << "Invalid position" << endl;
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;

        iCount--;
    }
    
}

int main()
{
    DoublyCL<int> *iobj = new DoublyCL<int> ; 
    int iRet =0;

    iobj->InsertFirst(524.6364);
    iobj->InsertFirst(25.24);
    iobj->InsertFirst(2.8574);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertLast(42.6554);
    iobj->InsertLast(58.246);
    iobj->InsertLast(235.54);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertAtPos(25.4154,5);
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