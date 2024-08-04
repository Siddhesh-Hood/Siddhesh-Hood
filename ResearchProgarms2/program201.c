#include <stdio.h>

int Addition(int iNo1, int iNo2 )   
{
    int iAns = 0.0;       //Variable to result
    iAns = iNo1 + iNo2;
    return iAns;
}


int main()
{ 
    int iValue1=0.0;     //Variable to Store first input
    int iValue2=0.0;           //Variable to Store second input
    int iRet=0.0;     //Variable to Store return value

    printf("ENTER FIRST NUMBER : \n");
    scanf("%d", &iValue1);

    printf("ENTER SECOND NUMBER: \n");
    scanf("%d", &iValue2);
     
     iRet= Addition(iValue1 , iValue2);

     printf("Addition is : %d\n",iRet);

    return 0;
}
