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

//Step 1: Accept number of elements from user 
    printf("Enter the desired number of elements:\n");
    scanf("%d",&iCount);


//Step 2: Allocate the values from user & store into that memory
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

//Step 4: Pass the address of that memory to the function(Any)

        iRet = Addition(Brr,iCount);
        printf("Addition is : %d\n", iRet);


//Step 5: after using that memory free it explicitely
    free(Brr);
    
    return 0;
}


