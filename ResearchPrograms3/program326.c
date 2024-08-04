#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 0x00000c00;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    if(iResult == iMask)
    {
        printf("11th & 12th bit is ON\n");
    }
    else
    {
        printf("11th & 12th bit is OFF\n");
    }

    return 0;
}
// 0000 0000 0000 0000 0000 1100 0000 0000
// 0    0       0    0    0  c     0   0  
//0x00000c00       