#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 0x00000120;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    if(iResult == iMask)
    {
        printf("6th & 9th bit is ON\n");
    }
    else
    {
        printf("6th & 9th bit is OFF\n");
    }

    return 0;
}
// 0000 0000 0000 0000 0001 0001 0010 0000
// 0    0       0    0    0  1    2    0   
//0x00000120       