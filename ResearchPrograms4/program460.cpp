#include<iostream>
using namespace std;

///////////////////////////////////////////////////
//
// Code of Singly Linear
//
//////////////////////////////////////////////////

template <class T>
struct nodeC
{
    T data;
    struct nodeC *next;
};

template <class T>
class SinglyLL
{
    private:
        struct nodeC<T> * First;
        int iCount;

    public:
        SinglyLL();

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
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeC<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeC<T> * newn = NULL;

    newn = new nodeC<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
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

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeC<T> * newn = NULL;
    struct nodeC <T>* temp = First;

    newn = new nodeC<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeC<T> * newn = NULL;
    int i = 0;
    struct nodeC<T> * temp;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else 
    {
        temp = First;
        
        newn = new nodeC<T>;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp -> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeC<T> * temp = First;

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

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeC<T> * temp = First;

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
        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeC<T> * temp1;
    struct nodeC<T> * temp2;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
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
        temp1 = First;

        for(i = 1; i < iPos-1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }    
}

////////////////////////////////////////////////////
//
//Code of Doubly Circular
//
///////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////
//
// Code of Doubly Liear 374
//
/////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////
//
// Code of Singly Circular <R>
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeSL
{
    T data;
    nodeSL<T> *next;
};

template <class T>
class SinglyCL
{
    private:
        nodeSL<T> * First;
        nodeSL<T> *Last;
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
    nodeSL<T> * temp = First;

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
    nodeSL<T> * temp = First;
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
    nodeSL<T> * newn = new nodeSL<T>;

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
    nodeSL<T> * newn = new nodeSL<T>;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;

    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    nodeSL<T> * temp = First;
    nodeSL<T> * newn = new nodeSL<T> ;

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
        nodeSL<T> * temp = First;
        First = First -> next;
        delete temp;
        Last -> next = First;
    }

    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    nodeSL<T> * temp = First;

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
    nodeSL<T> * temp1 = First;
    nodeSL<T> * temp2 = NULL;

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

/////////////////////////////////////////////////////////////
//
// Code of Stack 401
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

template <class T>
class Stack
{
    private:
        struct nodeS<T>* First;
        int iCount;

    public:
        Stack();
        void Display(); 
        int Count();
        void Push(T No);     //InsertFirst()
        int Pop();             //DeleteFirst()
};

template <class T>
Stack<T> :: Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack<T>:: Display()
{
    cout<<"Elements of Stack are :\n";
    struct nodeS<T>* temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

template <class T>
void Stack<T> ::Push(T No)   
{
    struct nodeS<T>* newn = NULL;

    newn = new nodeS<T>;

    newn->data = No;
    newn->next = First;
    
    if(First == NULL)
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

template <class T>
int Stack<T>::Pop()  
{
    int iValue =0;
    struct nodeS<T>* temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to Pop the element as Stack is Empty\n";
        return -1;   //Indicates faluire, As here it pops means failure so -1
    }
    else
    {
        temp = First;

        iValue = temp->data;
        First = First ->next;
        delete temp;

        iCount--;
    }
    return iValue;
}

/////////////////////////////////////////////////////////////
//
// Code of Queue 402
//
/////////////////////////////////////////////////////////////

template<class T>
struct nodeQ
{
    T data;
    struct nodeQ *next;
};

template<class T>
class Queue
{
    private:
        struct nodeQ<T>* First;
        int iCount;

    public:
        Queue();
        void Display(); 
        int Count();
        void EnQueue(T No);     //InsertFirst()
        int DeQueue();             //DeleteFirst()
};

template<class T>
Queue<T>:: Queue()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void Queue<T>:: Display()
{
    cout<<"Elements of Queue are :\n";
    struct nodeQ<T>* temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
int Queue<T>::Count()
{
    return iCount;
}

template<class T>
void Queue<T> ::EnQueue(T No)   
{
    struct nodeQ<T>* newn = NULL;
    struct nodeQ<T>* temp = NULL;

    newn = new nodeQ<T>;

    newn->data = No;
    newn->next = NULL;
    
    if(First == NULL)
    {
        First = newn;
    }
    else
    {
       temp = First;

       while(temp->next!= NULL)                       
       {
        temp = temp->next;
       }
       temp->next = newn;
    }
    iCount++;
}

template<class T>
int Queue<T>::DeQueue()  
{  
    int iValue =0;
    struct nodeQ<T>* temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Stack is Empty\n";
        return -1;   //Indicates faluire, As here it pops means failure so -1
    }
    else
    {
        temp = First;

        iValue = temp->data;
        First = First ->next;
        delete temp;

        iCount--;
    }
    return iValue; 
}




int main()
{
    
    cout<<"===============SINGLY LINEAR LINK LIST===============\n";

    cout<<"---------------Link List Of Integer---------------\n";

    SinglyLL<int> * iobj = new SinglyLL<int>();
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

    cout<<"---------------Link List Of Character---------------\n";

   SinglyLL<char> * cobj = new SinglyLL<char>();

    cobj->InsertFirst('C');
    cobj->InsertFirst('B');
    cobj->InsertFirst('A');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertLast('X');
    cobj->InsertLast('Y');
    cobj->InsertLast('Z');
    
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertAtPos('S',5);
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->DeleteAtPos(5);
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->DeleteFirst();
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->DeleteLast();
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl; 

    cout<<"---------------Link List Of Float---------------\n";

    SinglyLL<float> * fobj = new SinglyLL<float>();

    fobj->InsertFirst(52.63);
    fobj->InsertFirst(25.24);
    fobj->InsertFirst(2.84);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertLast(42.65);
    fobj->InsertLast(58.24);
    fobj->InsertLast(25.54);
    
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertAtPos(25.54,5);
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->DeleteAtPos(5);
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->DeleteFirst();
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->DeleteLast();
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cout<<"---------------Link List Of Double--------------- \n";

    SinglyLL<int> * dobj = new SinglyLL<int>();

    dobj->InsertFirst(524.6364);
    dobj->InsertFirst(25.24);
    dobj->InsertFirst(2.8574);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertLast(42.6554);
    dobj->InsertLast(58.246);
    dobj->InsertLast(235.54);
    
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertAtPos(25.4154,5);
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->DeleteAtPos(5);
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->DeleteFirst();
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->DeleteLast();
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cout<<"===============DOUBLY CIRCULAR LINK LIST===============\n";

     cout<<"---------------Link List Of Integer---------------\n";
  
     DoublyCL<int> *idobj = new DoublyCL<int>();

    idobj->InsertFirst(51);
    idobj->InsertFirst(21);
    idobj->InsertFirst(11);
    
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    idobj->InsertLast(101);
    idobj->InsertLast(111);
    idobj->InsertLast(121);
    
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    idobj->InsertAtPos(105,5);
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    idobj->DeleteAtPos(5);
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    idobj->DeleteFirst();
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    idobj->DeleteLast();
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cout<<"---------------Link List Of Character---------------\n";
  
     DoublyCL<int> *cdobj = new DoublyCL<int>();

    cdobj->InsertFirst('C');
    cdobj->InsertFirst('B');
    cdobj->InsertFirst('A');
    
    cdobj->Display();
    iRet = cdobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdobj->InsertLast('X');
    cdobj->InsertLast('Y');
    cdobj->InsertLast('Z');
    
    cdobj->Display();
    iRet = cdobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdobj->InsertAtPos('S',5);
    cdobj->Display();
    iRet = cdobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdobj->DeleteAtPos(5);
    cdobj->Display();
    iRet = cdobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdobj->DeleteFirst();
    cdobj->Display();
    iRet = cdobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdobj->DeleteLast();
    cdobj->Display();
    iRet = cdobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cout<<"===============DOUBLY LINEAR LINK LIST===============\n";
    cout<<"---------------Link List Of Character---------------\n";
  
    DoublyCL<char> *cdlobj = new DoublyCL<char>();

    cdlobj->InsertFirst('C');
    cdlobj->InsertFirst('B');
    cdlobj->InsertFirst('A');
    
    cdlobj->Display();
    iRet = cdlobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdlobj->InsertLast('X');
    cdlobj->InsertLast('Y');
    cdlobj->InsertLast('Z');
    
    cdlobj->Display();
    iRet = cdlobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdlobj->InsertAtPos('S',5);
    cdlobj->Display();
    iRet = cdlobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdlobj->DeleteAtPos(5);
    cdlobj->Display();
    iRet = cdlobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdlobj->DeleteFirst();
    cdlobj->Display();
    iRet = cdlobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cdlobj->DeleteLast();
    cdlobj->Display();
    iRet = cdlobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cout<<"===============SINGLY LINEAR LINK LIST===============\n";
    cout<<"---------------Link List Of Integer---------------\n";

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

    cout<<"===============S.T.A.C.K===============\n";
    cout<<"---------------STACK OF INTEGER---------------\n";

    Stack<int> *sobj = new Stack<int>();

    sobj->Push(10);
    sobj->Push(20);
    sobj->Push(30);
    sobj->Push(40);

    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of elements in Stack are:"<<iRet<<"\n";
//----------------
    iRet = sobj->Pop();
    cout<<"Popped element is:"<<iRet<<"\n";

    iRet = sobj->Pop();
    cout<<"Popped element is:"<<iRet<<"\n";
//-----------------

    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of elements in Stack are:"<<iRet<<"\n";

    sobj->Push(50);
    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of elements in Stack are:"<<iRet<<"\n";

    cout<<"===============Q.U.E.U.E===============\n";
    cout<<"---------------QUEUE OF INTEGER---------------\n";

    Queue<int> *qobj = new Queue<int>();
   

    qobj->EnQueue(10);
    qobj->EnQueue(20);
    qobj->EnQueue(30);
    qobj->EnQueue(40);

    qobj->Display();

    iRet = qobj->Count();
    cout<<"Number of elements in Queue are:"<<iRet<<"\n";

//----------------
    iRet = qobj->DeQueue();
    cout<<"DeQueue element is:"<<iRet<<"\n";

    iRet = qobj->DeQueue();
    cout<<"DeQueue element is:"<<iRet<<"\n";
//-----------------

    qobj->Display();
    iRet = qobj->Count();
    cout<<"Number of elements in Queue are:"<<iRet<<"\n";

    qobj->EnQueue(50);
    qobj->Display();
    iRet = qobj->Count();
    cout<<"Number of elements in Queue are:"<<iRet<<"\n";

    return 0;
}