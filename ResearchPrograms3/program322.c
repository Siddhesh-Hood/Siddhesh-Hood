#include <stdio.h>
int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask =0x00000008 ;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    if(iResult == iMask)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}

//HExadecimal MAsk