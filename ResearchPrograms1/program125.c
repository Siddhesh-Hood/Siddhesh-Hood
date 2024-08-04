//
#include<stdio.h>
#include<stdlib.h>

int DisplayEven(int Arr[], int iSize)
{
  int i =0 ;
    

    printf("Even elements are : \n");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]% 2== 0)
        {
            printf("%d\t",Arr[i]);
        }
  
    }
  


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

        
        iRet =  DisplayEven(Brr,iCount);    
    
    free(Brr);  //free(100)
    
    return 0;
}


