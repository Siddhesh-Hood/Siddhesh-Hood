#include<stdio.h>
#include<stdlib.h>

int EvenUpdator(int Arr[], int iSize)
{        
    int i =0; 

    for(i = 0; i < iSize; i++)
    {     if(Arr[i] % 2 == 0)
        {
          Arr[i] = Arr[i] + 1;      // (Arr[i])++;  
        }
    }
}

int main()
{

    int *Brr = NULL;
    int iCount = 0;
    
    int i = 0;

    printf("Enter number of elements you want:\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    EvenUpdator(Brr, iCount);

    printf("Data for Updator is : %d\n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }


    free(Brr);

    return 0;
}