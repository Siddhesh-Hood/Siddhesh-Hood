#include<iostream>
using namespace std;

void strcpyX(char *Dest, char *Src) 
{
    while(*Src !='\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
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

    strcpyX(Brr, Arr);  //strcpyX(200,100);

    cout<<"Copied string is: "<<Brr<<endl;
    return 0;
}