//Object Oriented Designing.
#include<iostream>
using namespace  std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No)  //constructor to allocate resources
        {
            cout<<"Inside Constructor"<<endl;
            iSize = No;
            Arr = new int[iSize];  //allocation of resource
        }

        ~ArrayX()  //destructor
        {
            cout<<"Inside destructor"<<endl;
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the Elements: "<<endl;
            for(i =0 ; i <iSize; i++)
            {
                cin>> Arr[i];
            }
        }
};

int main()
{
   int iLength = 0;

   cout<<"Enter number of elements to store: "<<endl;
   cin>>iLength; 

   ArrayX aobj(iLength);

   aobj.Accept();

    return 0;
} 


