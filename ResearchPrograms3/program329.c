#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 0xffffdff;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    
        printf("Updated number is : %u\n", iResult);
    

    return 0;
}

/*

   if 16th bit off make it on.
    1111 1111 1111 1111 1111 1101 1111 1111
    f      f    f   f    f     d    f    f

    0xffffdff
*/