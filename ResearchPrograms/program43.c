/* 
    Accept number as No
    Search for prime numbers
    then display as No is prime number 
    otherwise Display as No is Not Prime Number
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0; int iCount = 0;

    if(iNo <0)  //Upadtor
    {
       iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iCount++;
            break;         // Updation of time complexity according to the input
        }
    }
    if(iCount ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
 }

int main()
{
     int iValue = 0;
     bool bRet = false;

     printf(" Enter Number :\n");
     scanf("%d"  , &iValue);

     bRet = CheckPrime(iValue);
     if(bRet==true)
     {
        printf("%d is prime number \n", iValue);
     }
    else
    {
        printf("%d is not a prime number \n", iValue);
    }
    return 0;
}