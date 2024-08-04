//Non Linear pattern 
/*
    * * * * 
    * * * *
    * * * *
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int i = 0;
    
    for(i = 1; i<=3; i++) //Row
    {
    for(iCnt = 1; iCnt <=4 ; iCnt++) //Column
    {
        printf("*\t");
    }
    printf("\n");
    }

    
}

int main ()
{
    int iValue = 0;

    Display(iValue);

    return 0;   

}