#include<stdio.h>

int OddDisplay(int iNo)
{
    int iDigit =0;
    int iCount = 0;
    if(iNo < 0)

    {
        iNo = -iNo;
    
    }
    while (iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if (iDigit % 2 != 0) 
        {
            printf("%d\n", iDigit);
            iCount++;
        }

    }
    return iCount;
}
int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = OddDisplay(iValue);
     printf("\nNumber of Odd digits are:%d", iRet);
   


    return 0;
}