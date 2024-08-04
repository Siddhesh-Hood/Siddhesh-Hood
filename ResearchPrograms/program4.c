#include <stdio.h>

int main()
{ 
    float fValue1=0.0,  fValue2=0.0;
    float fResult=0.0;



    printf("ENTER FIRST NUMBER : \n");
    scanf("%f", &fValue1);

    printf("ENTER SECOND NUMBER: \n");
    scanf("%f", &fValue2);
     
     fResult= fValue1 + fValue2;

     printf("Addition is : %f\n",fResult);

    return 0;
}