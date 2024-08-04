#include<iostream>//BubbleSort
using namespace std;

template<class T>
class ArrayX
{
    public :
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch(T Value);

        void BubbleSort();
};

template<class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template<class T>
void ArrayX<T>::Display()
{
    int i = 0;

   // cout<<"Entered elements are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T Value)
{
    bool flag = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T>::BiDirectionalSearch(T Value)
{
    bool flag = false;
    int iStart = 0, iEnd = iSize - 1;

    for(; iStart <= iEnd; iStart++, iEnd--)
    {
        if(Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            flag = true;
            break;
        } 
    }

    return flag;
}

template <class T>
bool ArrayX<T>::BinarySearch(T Value)
{
    bool flag = false;
    int iStart = 0, iEnd = 0, iMid =0;

    iStart = 0;
    iEnd = iSize - 1;

   while(iStart <= iEnd)
   {
        iMid = iStart + ((iEnd - iStart) /2);

        if(Arr[iMid] == Value || (Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        else if(Value <Arr[iMid])//condition change
        {
            iStart =iMid +1;
        }
        else if(Value > Arr[iMid])//condition change
        {
            iEnd = iMid-1;
        }
   }

    return flag;
}

template <class T>
void ArrayX<T>::BubbleSort()
{
    int i = 0, j = 0;
    T temp = 0;
    //   1        2        3
    for(i = 0; i < iSize; i++)
    { //      1         2              3
        for(j = 0; j < iSize - 1 - i; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
            cout<<"\nArray After pass : "<<i+1<<"\n";
            Display();
    }
}

int main()
{
    int iLength = 0, No =0;
    //bool bRet = false;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();
    cout<<"Data Before Sorting are : \n";
    aobj->Display();
//---------------------------------------
    aobj->BubbleSort();
    cout<<"Sorted elements are : \n";
    aobj->Display();
//---------------------------------------   
  /*  cout<<"Enter the Element that you want to search :\n";
    cin>>No;

    bRet = aobj->BinarySearch(No);

    if(bRet == true)
    {
        cout<<"Element is present in the array\n";
    }
    else
    {
        cout<<"Element is not present in the array\n";
    } */
    delete aobj;
    
    return 0;
}