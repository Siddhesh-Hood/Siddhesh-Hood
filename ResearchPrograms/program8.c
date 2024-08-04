# include<stdio.h>
#include<stdbool.h>

//User is only going to input only positive inputs

//Algorithm
/*
    Start
        Accept one number as No
        Divide that number No by 2
        If remainder is 0
        then display the result as even number 
        otherwise display the result as odd number
    Stop
    
*/

/////////////////////////////////////////////////////////////////////
//
//Function Name : CheckEevenOdd
//Description :  It is used to check whether number is even or odd
//Input:        Integer
//Output:       Boolean
//Author:       Siddhesh Pramod Hood
//Date:         16/04/2024
//
///////////////////////////////////////////////////////////////////
bool CheckEvenOdd(unsigned int iNo)
{
    if  ((iNo % 2 == 0))
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
    unsigned int iValue=0;
    bool bRet = false;

    printf(" ENTER NUMBER : \n" );
    scanf ("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet==true)
    {
        printf( "\n The Number Is Even " ) ;
    }
    else 
    {
        printf("\n The Number Is Odd ");
    }


    return 0;
}