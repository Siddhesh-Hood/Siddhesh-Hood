//
#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[], int iSize)
{
  int i =0 ;
  int iFrequency =0;  

    
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i]% 3== 0) && (Arr[i]% 5== 0))
        {
            iFrequency++;
           
        }
  
    }
  return iFrequency;


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

        
        iRet =  Divisible(Brr,iCount);    
        printf("Count of Divisible by 5 are : %d\n", iRet);
    free(Brr);  //free(100)
    
    return 0;
}


