#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;

        ArrayX(int iSize)
        {
            this->iSize = iSize;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elements: \n";
            for(int i =0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Entered Elements are : \n";
            for(int i =0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    int iLength =0;

    cout<<"Enter The Number Of Elements: \n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    return 0;
}