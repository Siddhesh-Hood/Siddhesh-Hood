#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{        
    int i =0; int iMax = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]> iMax)
        {
            iMax = Arr[i];
        }
    }
     return iMax;
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
    iRet = Maximum(Brr, iCount);

    printf("Maximum Number is : %d\n", iRet);

    free(Brr);

    return 0;
}