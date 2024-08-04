#include <stdio.h>

int main()
{ 
   // int i,j,k;
    int iValue1=0 ,iValue2=0 ;
    int iResult=0;

    printf("ENTER FIRST NUMBER : \n");
    scanf("%d", &iValue1);

    printf("ENTER SECOND NUMBER: \n");
    scanf("%d", &iValue2);
     
     iResult=iValue1+iValue2;

     printf("Addition is : %d\n",iResult);

    return 0;
}