#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 0xfffffff7;

    printf("Enter  Number : \n");
    scanf("%u", & iNo1);

    iResult = iNo1 & iMask;

    
        printf("Updated number is : %u\n", iResult);
    

    return 0;
}

/*
Input : 12   0 0 0 0 1 1 0 0

Output : 4   0 0 0 0 0 1 0 0


            0 0 0 0 1 1 0 0
            1 1 1 1 0 1 1 1
            -------------------&
            0 0 0 0 0 1 0 0

    1111 1111 1111 1111 1111 1111 1111 0111
    f      f    f   f    f    f     f    7

    0xfffffff7
*/