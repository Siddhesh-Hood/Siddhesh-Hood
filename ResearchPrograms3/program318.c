#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 4096;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    if(iResult == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
    }

    return 0;
}

//Program for 6th bit Off or On.

// 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 