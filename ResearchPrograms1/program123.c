//
#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int i =0 ;
    int iSum = 0;

    //    1     2     3
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
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

    printf("Enter the elements :\n");
     for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

        iRet = Addition(Brr,iCount);    //Addition(100 ,4)
        printf("Addition is : %d\n", iRet);


    free(Brr);  //free(100)
    
    return 0;
}


