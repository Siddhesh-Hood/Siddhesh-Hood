#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 0xfff7fff;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    
        printf("Updated number is : %u\n", iResult);
    

    return 0;
}

/*

   if 16th bit off make it on.
    1111 1111 1111 1111 0111 1111 1111 1111
    f      f    f   f    7    f     f    f

    0xfff7fff
*/