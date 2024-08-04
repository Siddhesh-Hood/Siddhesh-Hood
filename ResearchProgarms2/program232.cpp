//Object Oriented Designing. //2 Topics :N numbers & digits.
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

            cout<<"Entered Elements are: "<<endl;
            for(i =0 ; i <iSize; i++)
            {
                cout<< Arr[i]<<endl;
            }
        }
        void CalculateDigits()
    {
        int i =0;
        int iNo = 0, iCount =0;

        
            for(i =0 ; i <iSize; i++)
            {
                while(Arr[i] != 0)
                {
                    iCount++;
                    Arr[i] = Arr[i] / 10;
                }
                cout<<Arr[i]<< " Contains "<< iCount<< " digits in it." << endl;
                iCount = 0;
            }
    }    
};

int main()
{
   int iLength = 0;

   cout<<"Enter number of elements to store: "<<endl;
   cin>>iLength; 
    
    ArrayX *aobj = new ArrayX(iLength);   

    aobj->Accept();
   

    aobj->CalculateDigits();
    
    delete aobj;

    return 0;
} 


