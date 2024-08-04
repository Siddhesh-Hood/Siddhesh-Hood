#include <stdio.h>
#include<stdbool.h>

//Time Complexity  : O(N/2)
void DisplayFactors (int iNo)
{   
    int iCnt = 0;

    printf (" Factors of %d are :" ,iNo);
   for(iCnt=1; iCnt<= (iNo/2) ; iCnt++)
   {
    if(iNo % iCnt == 0)
    {
    printf("%d \n ", iCnt);
    }
   }
   

}
int main()
{
    int iValue =0;
   
    printf(" Enter  a number : ");
    scanf("%d",&iValue);

  DisplayFactors (iValue);

    return 0;
}