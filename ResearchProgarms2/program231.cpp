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

        int CalculateDigits( int iNo)
    {
                int iCount =0;

                while(iNo != 0)
                {
                    iNo = iNo / 10;
                    iCount++;
                }
               
                return iCount;
            }

            void DisplayDigitsCount()

            {

                int i= 0, iRet =0;
                for(i =0; i < iSize ; i++)
                {
                    iRet = CalculateDigits(Arr[i]);
                     cout<< Arr[i]<< " Contains "<< iRet<< " digits in it." << endl;
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
   

   aobj->DisplayDigitsCount();
    

    delete aobj;

    return 0;
} 


