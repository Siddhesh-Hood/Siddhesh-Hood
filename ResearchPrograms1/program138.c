#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{        
    int i =0; int iMin = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]< iMin)
        {
            iMin = Arr[i];
        }
    }
     return iMin;
}

int main()
{

    int *Brr = NULL;
    int iCount = 0;
    int iRet =0;
    int i = 0;

    printf("Enter number of elements you want:\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    iRet = Minimum(Brr, iCount);

    printf("Minimum Number is : %d\n", iRet);

    free(Brr);

    return 0;
}