#include<stdio.h>

int DisplayResult( float fMarks)
{
    if ((fMarks < 0.0f) ||  (fMarks > 100.0f)) //Filter
    {  return 1; }


  if ((fMarks >= 0.0f) && (fMarks < 35.0f ))
  {
    return 2;
  }
  else
  {
    return 3;
  }

}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf(" Please Enter The Percentages:");
    scanf("%f",&fValue);

    iRet= DisplayResult(fValue);
    if (iRet == 1)
    {
        printf("\n Input is Invalid");}
    else if  (iRet==2)
    {
        printf("\n Student Is Fail ");
    }
    else if ( iRet == 3 )
    {
        printf("\n Student Is Passed ");

    }
    

    return 0;
}