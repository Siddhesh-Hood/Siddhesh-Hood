# include<stdio.h>
#include<stdbool.h>

//User is only going to input only positive inputs

//Algorithm
/*
    Start
        Accept one number as No
        Divide that number No by 3
        If remainder is 0
        Divide that number No by 5 
        If remainder is 0
        then print number is divisible by 3 and 5
        otherwise display the it is not divisible by 3,5
    Stop
    
*/

/////////////////////////////////////////////////////////////////////
//
//Function Name : heckDivisible
//Description :  It is used to check whether number is divisible by 3 & 5 
//Input:        Integer
//Output:       Boolean
//Author:       Siddhesh Pramod Hood
//Date:         16/04/2024
//
///////////////////////////////////////////////////////////////////
bool CheckDivisible(unsigned int iNo)
{
    if  (((iNo % 3) && (iNo % 5) == 0))
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

    bRet = CheckDivisible(iValue);

    if (bRet==true)
    {
        printf( "\n %d is divisible by 3 and 5 " , iValue ) ;
    }
    else 
    {
        printf("\n %d is divisible by either 3 or 5 ",iValue);
    }


    return 0;

}
/*

    logical operator
    
    FIRST       SECOND      &&      ||
    true        true        true    true
    false       false       false   false
    true        false       false   true
    false       true         false   true
    
    
    
    */