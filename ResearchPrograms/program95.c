//Non Linear pattern 
/*
    * * * * 
    * * * *
    * * * *
*/
#include<stdio.h>

void Display(int iNo)
{
    int i = 0;  int j = 0;
    
    for(i = 1; i<=3; i++)
    {
        for(j= 1; j <=4 ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }

    
}

int main ()
{
    int iValue = 0;

    Display(iValue);

    return 0;   

}