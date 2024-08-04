#include<iostream>
using namespace std;

template<class T>
T Minimun(T Arr[], int iSize)
{
    T Min = Arr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
  
}

int main()
{
    int iLength =0;
    float *ptr = NULL;
    int i =0; float fRet =0.0f;

    cout<<"Enter number of Elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements: \n";
    for(int i=0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered Elements are : \n";
    for(int i=0; i<iLength; i++)
    {
        cout<<ptr[i]<<"\n";
    }

    fRet = Minimun(ptr,iLength);
    cout<<"Minimun element of all is : "<<fRet<<"\n";
    delete []ptr;

    return 0;

}