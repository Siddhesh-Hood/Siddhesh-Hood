#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int CheckOccurence(char *str)
{   
    bool bFlag =false;
    while (*str !='\0')
{
         if ( (*str == 'l'))
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
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurence(Arr);

    if (bRet== true)
    {
        printf(" 'l' is present\n");
    }
    else 
    {
         printf(" 'l' is not present\n");
    }
    return 0;
}