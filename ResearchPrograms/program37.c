#include <stdio.h>
#include<stdbool.h>

int CountFactors (int iNo)
{   
    int iCnt = 0;
    int iCount = 0;

    
   for(iCnt=1; iCnt< iNo; iCnt++)
   {
    if(iNo % iCnt == 0)
    {
        iCount++;
    }
   }
   return  iCount;
}


int main()
{
    int iValue =0; int iRet = 0;
   
    printf(" Enter  a number : ");
    scanf("%d",&iValue);

    iRet = CountFactors (iValue);
    printf("Count of Factors are : %d\n ", iRet);

    return 0;
}