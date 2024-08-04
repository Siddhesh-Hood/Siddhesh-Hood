#include<stdio.h>

//User defined macro
#define RET_INALID 1
#define RET_FAIL 2
#define RET_PASS 3

int DisplayResult( float fMarks)
{
    if ((fMarks < 0.0f) ||  (fMarks > 100.0f)) //Filter
    {  return RET_INALID; }


  if ((fMarks >= 0.0f) && (fMarks < 35.0f ))
  {
    return RET_FAIL;
  }
  else
  {
    return RET_PASS;
  }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf(" Please Enter The Percentages:");
    scanf("%f",&fValue);

    iRet= DisplayResult(fValue);
    if (iRet ==  RET_INALID)
    {
        printf("\n Input is Invalid");}
    else if  (iRet==RET_FAIL)
    {
        printf("\n Student Is Fail ");
    }
    else if ( iRet == RET_PASS )
    {
        printf("\n Student Is Passed ");

    }
    return 0;
}