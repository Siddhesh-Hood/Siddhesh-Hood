#include<stdio.h>

void CountOne(int iNo)
{
    int iDigit = 0;
    int iCount  = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 2;
        printf("%d",iDigit);
        iNo = iNo / 2;
    }
    printf("\n");
}
int main()
{

    int iValue = 0, iRet =0;

    printf("Enter Number : \n");
    scanf("%d", & iValue);

    printf("Binary representation: ");
    CountOne(iValue);
    


    return 0;
}