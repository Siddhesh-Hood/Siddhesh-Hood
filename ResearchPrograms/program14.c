#include<stdio.h>
#include<stdbool.h>

bool DisplayResult( float fMarks)
{
    if ((fMarks < 0.0f) ||  (fMarks > 100.0f)) //Filter
    {
        printf(" \n Invalid Input");
        return false;
    }


  if ((fMarks >= 0.0f) && (fMarks < 35.0f ))
  {
    return false;
  }
  else
  {
    return true;
  }

}

int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf(" Please Enter The Percentages:");
    scanf("%f",&fValue);

    bRet= DisplayResult(fValue);
    if (bRet == true)
    {
        printf("\n Student Is Pass ");}
    else
    {
        printf("\n Student Is Fail ");
    }


    return 0;
}