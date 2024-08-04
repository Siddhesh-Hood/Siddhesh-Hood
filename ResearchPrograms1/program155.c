#include<stdio.h>
#include<stdbool.h>
 
bool CheckSmall(char ch)
{ 
    if((ch >='a') && (ch <= 'z'))
    {  printf("It is small letter"); }
    else
    {  printf("It is not small letter");  }


}
int mian()
{     
    char cValue ;
    


    printf("Enter a character :\n ");
    scanf("%c",&cValue);

 CheckSmall(cValue);
    
    return 0;
}