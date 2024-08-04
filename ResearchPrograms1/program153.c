#include<stdio.h>
#include<stdbool.h>
 
bool CheckCapital(char ch)
{ 
    if((ch >='A') && (ch <= 'Z'))
    {  printf("It is capital letter"); }
    else
    {  printf("It is not capital letter");  }


}
int mian()
{     
    char cValue ;
    bool bRet = false;


    printf("Enter a character :\n ");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    
    return 0;
}