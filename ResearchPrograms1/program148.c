#include<stdio.h>
#include<stdlib.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;

}   

int main()
{
    int A = 0, B =0;

    printf("Enter first number: \n");
    scanf("%d",&A);

    printf("Enter second number: \n");
    scanf("%d",&B);

    Swap(&A, &B);

    printf("Value of A after Swaping : %d\n", A);
    printf("Value of B after Swaping : %d\n", B);
    

    return 0;
}