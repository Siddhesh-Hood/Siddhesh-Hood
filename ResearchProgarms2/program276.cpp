 //Problems On Reccurssion
#include <iostream>
using namespace std;

//Apporach 4 : Using reccurssion
void Display(int iNo)
{
     int i =0;
    
    while(i<= iNo)
    {
        cout<<i<<endl;
        i++;
        
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