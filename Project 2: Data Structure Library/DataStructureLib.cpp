#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    private:
        struct node<T> * First;
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

        T Addition();
        T EvenCount();
        T OddCount();
        T Frequency(T No);
        bool Search(T No);
        int SearchFirstOccurence(T No);
        int SearchLastOccurence(T No);
        void SumDigits();
        T FactorsAddition();
        void SumFactors();
        void DisplayPerfect();
        T MiddleElement();
        T MiddleElementX();

        T SumOfDigits(T iNo); // Add this declaration
        bool ChkPerfect(T iNo); // Add this declaration
        void DisplayPrime(); // Add this declaration
        bool ChkPrime(T iNo); // Add this declaration
        void DisplayPalindrome(); // Add this declaration
        bool ChkPalindrome(T iNo); // Add this declaration
        T FactorsAdd(T iNo); // Add this declaration
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
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
} 

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
} 

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

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
void SinglyLL<T>::InsertLast(T No)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = First;

    newn = new node<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
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
    struct node<T> * newn = NULL;
    int i = 0;
    struct node<T> * temp;

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

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn = new node<T>;
        newn->data = No;
        newn->next = temp->next;
        temp -> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct node<T> * temp = First;

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
    struct node<T> * temp = First;

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
    struct node<T> * temp1;
    struct node<T> * temp2;

    if((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid position\n";
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
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }    
}

template <class T>
T SinglyLL<T>::Addition()
{
    T iSum = 0;
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }
    return iSum;
}

template <class T>
T SinglyLL<T>::EvenCount()
{
    T iCount =0;
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        if((temp->data)%2 ==0)
        {
            iCount++;
        }
        temp = temp->next;
    }
    return iCount;
}

template <class T>
T SinglyLL<T>::OddCount()
{
    T iCount =0;

    while(First != NULL)
    {
        if( (First->data) % 2 != 0 ) 
        {
            iCount++;
        }
        First = First->next;
    }
    return iCount;
}

template <class T>
T SinglyLL<T>::Frequency(T No)
{
    T iCount =0;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iCount++;
        }
        First = First->next;
    }
    return iCount;
} 

template <class T>
bool SinglyLL<T>::Search(T No)
{
    bool bFlag = false;

    while(First !=NULL)
    {
        if(First->data == No)
        {
            bFlag = true;
            break;
        }
        First = First->next;
    }
    return bFlag;
}

template <class T>
int SinglyLL<T>::SearchFirstOccurence(T No)
{
    int iCount = 1;
    int iPos= -1;
    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos= iCount;
            break;
        }
        iCount++;
        First = First->next;
    }
    return iPos;
}

template <class T>
int SinglyLL<T>::SearchLastOccurence(T No)
{
        int iCount = 1;
    int iPos = -1;
    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = iCount;
        }
        iCount++;
        First = First->next;
    }
    return iPos;
}

template <class T>
void SinglyLL<T>::SumDigits()
{
        struct node<T> * temp = First;
                T iNo = 0;
        T iSum = 0;
        while(temp != NULL)
        {
            iNo = temp->data;
            iSum = iSum + SumOfDigits(iNo);
            temp = temp->next;
        }
        cout<<"Sum of digits of all elements is : "<<iSum<<endl;
}

template <class T>
T SinglyLL<T>::SumOfDigits(T iNo)
{
    T iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

template <class T>
void SinglyLL<T>::DisplayPerfect()
{
    struct node<T> * temp = First;
    while(temp != NULL)
    {
        if(ChkPerfect(temp->data))
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
    cout<<endl;
}

template <class T>
bool SinglyLL<T>::ChkPerfect(T iNo)
{
    T iSum = 0;
    T iCnt = 1;
    while(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void SinglyLL<T>::DisplayPrime()
{
    struct node<T> * temp = First;
    while(temp != NULL)
    {
        if(ChkPrime(temp->data))
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
    cout<<endl;
}

template <class T>
bool SinglyLL<T>::ChkPrime(T iNo)
{
    T iCnt = 0;
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void SinglyLL<T>::DisplayPalindrome()
{
    struct node<T> * temp = First;
    while(temp != NULL)
    {
        if(ChkPalindrome(temp->data))
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
    cout<<endl;
}

template <class T>
bool SinglyLL<T>::ChkPalindrome(T iNo)
{
    T iTemp = iNo;
    T iDigit = 0;
    T iRev = 0;
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iRev = (iRev * 10) + iDigit;
        iTemp = iTemp / 10;
    }
    if(iRev == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
T SinglyLL<T>::FactorsAddition()
{
    T iSum = 1;
    struct node<T> * temp = First;
    while(temp!= NULL)
    {
        iSum = iSum + FactorsAdd(temp->data);
        temp = temp->next;
    }
    return iSum;
}

template <class T>
T SinglyLL<T>::FactorsAdd(T iNo)
{
    T iSum = 1;
    for(T iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

  
template <class T>
void SinglyLL<T>::SumFactors()
{
    T iSum = 0;
    struct node<T> * temp = First;
    while(temp!= NULL)
    {
        iSum = iSum + FactorsAdd(temp->data);
        temp = temp->next;
    }
    cout<<"Sum of factors of all elements is : "<<iSum<<endl;
}

template <class T>
T SinglyLL<T>::MiddleElement()
{
    struct node<T> * temp = First;
    int iCnt = Count();
    for(int i = 1; i <= (iCnt/2); i++)
    {
        temp = temp->next;
    }
    return temp->data;
}

template <class T>
T SinglyLL<T>::MiddleElementX()
{
    struct node<T> * temp = First;
    struct node<T> * temp1 = NULL;
    temp1 = temp;
    int iCnt = Count();
    for(int i = 1; i <= (iCnt/2); i++)
    {
        temp = temp->next;
    }
    while(temp!= NULL)
    {
        temp = temp->next;
        temp1 = temp1->next;
    }
    return temp1->data;
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
    cout<<"Number of elements are : "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    iobj->InsertAtPos(105,5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    iobj->DeleteAtPos(5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    cout<<"Addition of all elements is : "<<iobj->Addition()<<endl;
    cout<<"Even count is : "<<iobj->EvenCount()<<endl;
    cout<<"Odd count is : "<<iobj->OddCount()<<endl;

    iobj->DisplayPerfect();
    iobj->DisplayPrime();
    iobj->DisplayPalindrome();

   // cout<<"Sum of factors of all elements is : "<<iobj->FactorsAddition()<<endl;
    //iobj->SumFactors();

    cout<<"Middle element is : "<<iobj->MiddleElement()<<endl;
    cout<<"Middle element is : "<<iobj->MiddleElementX()<<endl;

    return 0;
}