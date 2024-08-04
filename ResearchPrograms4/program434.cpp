#include<iostream>
using namespace std;

template<class T>
T Addition(T Arr[], int iSize)
{
    int iCnt = 0; T iSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
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

    fRet = Addition(ptr,iLength);
    cout<<"Addition of all elements is : "<<fRet<<"\n";
    delete []ptr;

    return 0;

}