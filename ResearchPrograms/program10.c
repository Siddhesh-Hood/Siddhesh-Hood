#include<stdio.h>
#include<stdbool.h>

/*
    START 
        Aceept one number as No
        If number is Greater than 30 and if is less than 50
        then display message as number is in range 
        otherwise 
        display the messsage as number is not in thr range 
        STOP
*/

bool CheckRange(int iNo)
{

    if((iNo >=30)  &&  (iNo<=50))
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
    int iValue =0;
    bool bRet =false;

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet = CheckRange(iValue);
    if (bRet == true)
    {
       printf(" yes\n" );
    }
    else
    {
      printf(" no\n" );
    }

    return 0;
}