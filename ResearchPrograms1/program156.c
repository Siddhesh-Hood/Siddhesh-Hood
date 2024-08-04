#include<stdio.h>

 
void CheckDigit(char ch)
{ 
    if((ch >='0') && (ch <= '9'))
    {  printf("It is digit"); }
    else
    {  printf("It is not digit");  }


}
int mian()
{     
    char cValue ;

    printf("Enter a character :\n ");
    scanf("%c",&cValue);

    CheckDigit(cValue);
    
    return 0;
}