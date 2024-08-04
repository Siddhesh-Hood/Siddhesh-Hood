#include<iostream>
using namespace std;

int main()
{
    int iLength =0;
    int *ptr = NULL;
    int i =0, 

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

    delete []ptr;

    return 0;

}