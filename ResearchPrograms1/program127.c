//
#include<stdio.h>
#include<stdlib.h>

int AdditionEven(int Arr[], int iSize)
{
  int i =0 ;
  int iSum =0;  

    printf("Even elements are : \n");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]% 2== 0)
        {
            iSum = iSum + Arr[i];
           
        }
  
    }
  return iSum;


}

int main()
{
    int iCount = 0; int i =0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter the desired number of elements:\n");
    scanf("%d",&iCount);


    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

        
        iRet =  AdditionEven(Brr,iCount);    
        printf("Addition = %d\n", iRet);
    free(Brr);  //free(100)
    
    return 0;
}


