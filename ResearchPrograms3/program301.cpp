 //Problems On Reccurssion 
#include <iostream>
using namespace std;

int strlenX(char *str)
{
     static int iCount = 0;

    if (*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
        return iCount;     
        
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter String: "<<endl;
    cin.getline(Arr,30);

    iRet = strlenX(Arr);

    cout<<" String Length is : "<<iRet<<endl;
   
    return 0;
}