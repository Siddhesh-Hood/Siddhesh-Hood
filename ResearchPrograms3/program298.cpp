 //Problems On Reccurssion 
#include <iostream>
using namespace std;

int SumFactors(int iNo)
{    
    static int i = 1, iSum = 0;
    
    if(i<= (iNo/2))
    {
        if(iNo % i == 0)
        {
            iSum = iSum +i;
        }
        i++;
        SumFactors(iNo);
    }
    return iSum;
} 

int main()
{
    int iValue = 0, iRet =0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Sum of factors is: "<<iRet<<endl;
    return 0;
}