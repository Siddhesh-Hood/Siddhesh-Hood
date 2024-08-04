 //Problems On Reccurssion
#include <iostream>
using namespace std;

//Apporach 4 : Using reccurssion
void Display(int iNo)
{
    static int i =1;
    
    if(i<= iNo)
    {
        cout<<"*"<<endl;
        i++;
        Display(iNo);  //reccurssive call
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;
    Display(iValue);
    
    cout<<"End of Application"<<endl;
    return 0;
}