#include <stdio.h>

void Display (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Hanuman...\n");
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