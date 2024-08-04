#include<iostream>
using namespace  std;

float Average(int Arr[], int iSize)
{
    int iSum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return (iSum / iSize);
}

int main()
{
    int iLength =0, i=0;
    float fRet =0.0f;

    int *ptr = NULL;

    cout<<"Enter number of elements to store: "<<endl;
    cin>>iLength;

    ptr = new int [iLength];
    //ptr =(int *)malloc(sizeof(int) * iLength);

    cout<<"Enter the elements: "<<endl;
    for(i=0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered the elements are: "<<endl;
    for(i=0; i<iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }

    fRet = Average(ptr , iLength);

    cout<<"Average of the numbers is: " << fRet << endl;

    delete []ptr;
    //free(ptr);

    return 0;
    } 


