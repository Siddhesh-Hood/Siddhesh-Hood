#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int CheckOccurence(char *str)
{   
    bool bFlag =false;
    while (*str !='\0')
{
         if ((*str == 'w')|| (*str == 'W'))
            {
                bFlag = true;
                break;
            }
            str++;
              return bFlag;
}
}
int main()
{
    char Arr[100];
    bool bRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurence(Arr);

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