#include<iostream>
using namespace std;

void strcpyCapX(char *Dest, char *Src) 
{
    while(*Src!='\0')
    {
        if( (*Src >= 'A') && (*Src <= 'Z') )
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }

    *Dest = '\0';
}

int main()
{
    int iRet = 0;
    char Arr[30]; 
    char Brr[30];
    
    cout<<"Enter the Source string: "<<endl;
    cin.getline(Arr,30);

    strcpyCapX(Brr, Arr);  //strcpyX(200,100);

    cout<<"Copied string is: "<<Brr<<endl;
    return 0;
}