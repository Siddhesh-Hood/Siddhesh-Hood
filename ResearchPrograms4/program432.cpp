#include<iostream>
using namespace std;

int Addition(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength =0;
    int *ptr = NULL;
    int i =0, iRet =0;

    cout<<"Enter number of Elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

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

    iRet = Addition(ptr,iLength);
    cout<<"Addition of all elements is : "<<iRet<<"\n";
    delete []ptr;

    return 0;

}