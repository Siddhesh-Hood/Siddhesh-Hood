#include<iostream>//Stack
using namespace std;

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

int main()
{
    cout<<"===============S.T.A.C.K===============\n";
    cout<<"---------------Link List Of Integer---------------\n";

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
    
    return 0;
}