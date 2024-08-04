#include<iostream>
using namespace std;

void Accept(int Arr[], int iSize)
{
    cout<<"Enter the elements: \n";
    for(int i =0; i<iSize; i++)
    {
        cin>>Arr[i];
    }

}

void Display(int Arr[], int iSize)
{
    cout<<"Entered Elements are : \n";
    for(int i =0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
    cout<<endl;
}

int main()
{
    int *ptr = NULL;
    int iLength =0;

    cout<<"Enter The Number Of Elements: \n";
    cin>>iLength;

    ptr = new int[iLength];

    Accept(ptr,iLength);
    Display(ptr,iLength);

    delete[] ptr; // Don't forget to free the dynamically allocated memory

    return 0;
}