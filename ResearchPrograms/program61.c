#include<stdio.h>

int Countdigits(int iNo)
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
        
        if (iDigit > 5) 
        {
            
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Countdigits(iValue);
     printf("\nNumber of digits greater than 5 are:%d", iRet);
   


    return 0;
}