#include<iostream>
using namespace std;

template<class T>
void Swap(T &A, T &B)   //call by refference
{
    T Temp;

    Temp =A;
    A = B;
    B = Temp;
}
int main()
{
    char Value1 = 'A', Value2 = 'S';
   // int Value1 = 10, Value2 = 20;
    //double Value1=10.9, Value2=11.2;

    cout<<"Value of Value1 variable is :"<<Value1<<"\n";
    cout<<"Value of Value2 variable is :"<<Value2<<"\n";

    Swap(Value1,Value2);

    cout<<"Value of Value1 variable after swapping is :"<<Value1<<"\n";
    cout<<"Value of Value2 variable after swapping is :"<<Value2<<"\n";

    return 0;
}