#include<iostream>
using namespace std;


float Maximum(float Arr[], int iSize)
{
    float Max = Arr[0];
    int i =0;
    for(i = 1; i < iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
  
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

    fRet = Maximum(ptr,iLength);
    cout<<"Maximum element of all is : "<<fRet<<"\n";
    delete []ptr;

    return 0;

}