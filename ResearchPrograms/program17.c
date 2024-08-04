/*
    0 to 35     Fail                          (35 is Exclusive)
    35 to 50    Pass Class                    (50 is Exclusive)
    50 to 60    Second Class                  (60 is Exclusive)
    60 to 75    First Class                   (75 is Exclusive)
    75 to 100   First Class with Distinction  (100 is inclusive)
*/

#include<stdio.h>       

//User defined macro
#define RET_INALID -1

#define RET_FAIL 1
#define RET_PASS_CLASS 2
#define RET_SECOND_CLASS 3
#define RET_FIRST_CLASS 4
#define RET_DISTINCTION 5


int DisplayResult( float fMarks)
{
    if ((fMarks < 0.0f) ||  (fMarks > 100.0f)) //Filter
    {  return RET_INALID; }


  if ((fMarks >= 0.0f) && (fMarks < 35.0f ))
  {
    return RET_FAIL;
  }
   elseif ((fMarks >= 35.0f) && (fMarks < 50.0f ))
  {
    return RET_PASS_CLASS; 
  }
    elseif ((fMarks >= 50.0f) && (fMarks < 60.0f ))
  {
    return RET_SECOND_CLASS; 
  }
    elseif ((fMarks >= 60.0f) && (fMarks < 75.0f ))
  {
    return RET_FIRST_CLASS;
  }
    elseif ((fMarks >= 75.0f) && (fMarks <= 100.0f ))
  {
    return RET_DISTINCTION; 
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
    elseif (iRet==RET_FAIL)
    {
        printf("\n Student Pass Calss Passed ");
    }
     elseif (iRet==RET_PASS_CLASS)
     {
        printf("\n Student is  in PASS Class");
     }
     elseif (iRet==RET_SECOND_CLASS)
     {
        printf("\n Student Second Calss Passed ");  
     }
     elseif (iRet==RET_FIRST_CLASS)
     {
          printf("\n Student is  in First Class");
        
     }
     elseif ( iRet == RET_DISTINCTION) 
     {
        printf(" \n Student is in Distinction");
     }

    return 0;
}