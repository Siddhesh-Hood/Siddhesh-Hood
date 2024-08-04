#include<stdio.h>
#include<stdbool.h>
 
bool CheckCapital(char ch)
{ 
    if((ch >=65) && (ch <= 97))
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
