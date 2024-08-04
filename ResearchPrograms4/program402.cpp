#include<iostream>//Queue in Data Structures.
using namespace std;

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

    newn = new nodeQ<T>*;

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
    cout<<"===============S.T.A.C.K===============\n";
    cout<<"---------------STACK OF INTEGER---------------\n";

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