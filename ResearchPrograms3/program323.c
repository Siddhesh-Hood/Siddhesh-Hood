#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 0x00000100;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    if(iResult == iMask)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }

    return 0;

}
// 0000 0000 0000 0000 0000 0000 0000 0000
// 0    0       0    0   0   1       0   0
