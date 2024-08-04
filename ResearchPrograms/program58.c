#include<stdio.h>

int EvenDisplay(int iNo)
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
        if (iDigit % 2 == 0) 
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

    iRet = EvenDisplay(iValue);
     printf("\nNumber of even digits are:%d", iRet);
   


    return 0;
}