#include<stdio.h>
 
bool CheckCapital(char ch)
{ 
    if((ch >='A') && (ch <= 'Z'))
    { return true ;  }
    else
    {return  false;  }


}
int mian()
{     
    char cValue ;
    bool bRet = false;


    printf("Enter a character :\n ");
    scanf("%c",&ch);

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("It is capital letter");
    }
    else
    {
       printf("It is not capital letter"); 
    }

    
    return 0;
}