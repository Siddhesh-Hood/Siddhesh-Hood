//Problems On Reccurssion
#include <iostream>
using namespace std;

//Apporach 3 : Using reccurssion
void Display()
{
    auto i =1;
    
    if(i<= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();  //reccurssive call
    }
}

int main()
{
    Display();
    
    return 0;
}