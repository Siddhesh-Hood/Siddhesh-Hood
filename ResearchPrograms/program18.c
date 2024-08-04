/*
    0 to 35     Fail                          (35 is Exclusive)
    35 to 50    Pass Class                    (50 is Exclusive)
    50 to 60    Second Class                  (60 is Exclusive)
    60 to 75    First Class                   (75 is Exclusive)
    75 to 100   First Class with Distinction  (100 is inclusive)
*/

#include<stdio.h>       

//User defined macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASS_CLASS 2
#define RET_SECOND_CLASS 3
#define RET_FIRST_CLASS 4
#define RET_DISTINCTION 5


int DisplayResult( float fMarks)
{
    if ((fMarks < 0.0f) ||  (fMarks > 100.0f)) //Filter
    { 
       return RET_INVALID;
     }


  if ((fMarks >= 0.0f) && (fMarks < 35.0f ))
  {
    return RET_FAIL;
  }
   else if ((fMarks >= 35.0f) && (fMarks < 50.0f ))
  {
    return RET_PASS_CLASS; 
  }
    else if ((fMarks >= 50.0f) && (fMarks < 60.0f ))
  {
    return RET_SECOND_CLASS; 
  }
    else if ((fMarks >= 60.0f) && (fMarks < 75.0f ))
  {
    return RET_FIRST_CLASS;
  }
    else if ((fMarks >= 75.0f) && (fMarks <= 100.0f ))
  {
    return RET_DISTINCTION; 
  }
 
}


int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf(" Please Enter The Percentages:");
    scanf("%f",&fValue);

    iRet= DisplayResult(fValue);
    switch (iRet)
    {
      case RET_FAIL:
      printf("\n student is Fail\n");
      break;


      case RET_PASS_CLASS:
      printf("\n Student is in pass class");
      break;


      case RET_SECOND_CLASS:
      printf("\n Student is in second divisionclass");
      break;


      case RET_FIRST_CLASS :
      printf("\n Student is in first class");
            break;


      case  RET_DISTINCTION :
      printf("\n Student is in Distinction");
      break;


      case  RET_INVALID:
      printf("\n Invalid Input \n");
      break;
      

    }

    return 0;
}