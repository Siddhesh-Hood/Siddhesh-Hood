 //Problems On Reccurssion
#include <iostream>
using namespace std;


void Display(int iNo)
{
    
    while(iNo >= 1)
    {
        cout<<iNo<<endl;
        iNo--;
        
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