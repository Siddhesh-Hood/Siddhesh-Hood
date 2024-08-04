//Object Oriented Designing.
#include<iostream>
using namespace  std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)  //constructor to allocate resources
        {
            
            iSize = No;
            Arr = new int[iSize];  //allocation of resource
        }


        ~ArrayX()  //destructor
        {
            
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

        void Display()
        {
            int i = 0;

            cout<<"Enter the Elements: "<<endl;
            for(i =0 ; i <iSize; i++)
            {
                cout<< Arr[i]<<endl;
            }
        }

        float Average()
    {
        int iSum = 0;
        int i = 0;
        float fAns =0.0f;

        for(i = 0; i < iSize; i++)
        {
            iSum = iSum + Arr[i];
        }

        fAns = ((float) iSum / (float) iSize);

        return fAns;
    }    
};

int main()
{
   int iLength = 0;
    float fRet =0;
   cout<<"Enter number of elements to store: "<<endl;
   cin>>iLength; 

   //ArrayX aobj(iLength);                 //Static Object Creation
   ArrayX *aobj = new ArrayX(iLength);   //Dynamic Object Creation

   aobj->Accept();
   aobj->Display();

   fRet= aobj->Average();
    cout << "Average of the numbers is: " << fRet << endl;

    delete aboj;

    return 0;
} 


