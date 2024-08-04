#include <stdio.h>

void Display (int iNo)
{
    int iCnt = 0;

    iCnt = 1;                       //1
    while( iCnt <= iNo)               //2
    {
        printf("\n Jay Hanuman...\n"); //4
        iCnt++;                     //3
    }
}

int main ()
{
     int iValue =0;

    printf("\n Enter Number the of Times to Display: ");
    scanf(" %d ", &iValue);

    Display(iValue);
    return 0;
}