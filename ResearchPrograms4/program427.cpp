#include<iostream> ////Conversion To Generic.
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;
    
    return Ans;
}

int main()
{
    int iValue1 = 10, iValue2 = 11;
    int iRet = 0;

    float fValue1 = 10.78f, fValue2 = 11.07f;
    float fRet = 0.0f;

    double dValue1 = 10.78, dValue2 = 11.07;
    double dRet = 0.0;

    dRet = Addition(dValue1, dValue2);
    cout<<"Addition is : "<<dRet<<"\n";

    fRet = Addition(fValue1, fValue2);
    cout<<"Addition is : "<<fRet<<"\n";

    iRet = Addition(iValue1, iValue2);
    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}