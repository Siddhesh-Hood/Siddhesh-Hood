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
    
    for(iCnt = 1; iCnt <=4 ; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

    for(iCnt = 1; iCnt <=4 ; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

    for(iCnt = 1; iCnt <=4 ; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main ()
{
    int iValue = 0;

    Display(iValue);

    return 0;   

}