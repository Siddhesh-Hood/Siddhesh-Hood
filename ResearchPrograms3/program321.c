#include <stdio.h>

int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 288;

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

/*

    Decimal         Binary      Hexadecimal
    0               0000            0   
    1               0001            1
    2               0010            2
    3               0011            3
    4               0100            4
    5               0101            5
    6               0110            6   
    7               0111            7
    8               1000            8
    9               1001            9
    10              1010            a  
    11              1011            b
    12              1100            c
    13              1101            d
    14              1110            e
    15              1111            f

int No = 12;       1 1 0 0

0000     0000   0000    0000   0000   0000   0000  1100

                                0x0000000b
*/