#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int CheckOccurence(char *str)
{   
    bool bFlag =false;
    while (*str !='\0')
{
         if ( (*str == 'w'))
            {
                bFlag = true;
                break;
            }
             return bFlag;
        
            str++;
}
}

int main()
{
    char Arr[100];
    bool bRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurence(Arr);     // strlenX(100)

    if (bRet== true)
    {
        printf(" 'w' is present\n");
    }
    else 
    {
         printf(" 'w' is not present\n");
    }
    return 0;
}