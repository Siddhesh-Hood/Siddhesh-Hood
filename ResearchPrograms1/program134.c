//
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],  int iSize, int iNo)
{
  int i =0 ;
  int bFlag = false;  
    for(i = 0; i < iSize; i++)
    {
        if (Arr[i]== iNo)
        {
            bFlag = true;
            break;
        }
    }
  return bFlag;


}

int main()
{
    int iCount = 0; int i =0; int iValue=0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter the elements you want:\n");
    scanf("%d",&iCount);


    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
       printf("Enter the element that you want to search: \n");
       scanf("%d", & iValue);


        bRet =  Search(Brr,iCount, iValue);
        if(bRet == true)
        {     
        printf("Element present in array\n");
        }
        else 
        {
            printf("Element present not in array\n");
        }


    free(Brr);  //free(100)

    
    return 0;
}


