#include <stdio.h>

float Addition(
                float fNo1,  //First Input
                float fNo2  // Second Input
               )   
    
{
    float fAns = 0.0;       //Variable to result
    fAns = fNo1 + fNo2;
    return fAns;
}


int main()
{ 
    float fValue1=0.0,     //Variable to Store first input
    fValue2=0.0;           //Variable to Store second input
    float fResult=0.0;     //Variable to Store return value



    printf("ENTER FIRST NUMBER : \n");
    scanf("%f", &fValue1);

    printf("ENTER SECOND NUMBER: \n");
    scanf("%f", &fValue2);
     
     fResult= Addition(fValue1 , fValue2);

     printf("Addition is : %f\n",fResult);

    return 0;
}
