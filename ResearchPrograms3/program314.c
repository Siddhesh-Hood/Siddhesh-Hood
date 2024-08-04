#include<stdio.h>

/*
    iNo     11      0 0 0 0 1 0 1 1
       Mask         0 0 0 0 1 0 0 0  
                    ---------------------------&
                    0 0 0 0 1 0 0 0          Result


    iNo     20      0 0 0 1 0 1 0 0  
       Mask         0 0 0 0 1 0 0 0  
                    ---------------------------&
                    0 0 0 0 0 0 0 0          Result
*/
int main()
{

    unsigned int iNo1 = 0, iResult =0 , iMask = 8;

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

/*
    -------------------------------------
    OP1     OP2     &       |       ^
    -------------------------------------
    1       1       1       1       0
    1       0       0       1       0
    0       1       0       1       1   
    0       0       0       0       0
    -------------------------------------
*/