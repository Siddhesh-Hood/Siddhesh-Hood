#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool CheckOccurence(char *str, char ch)
{   
    bool bFlag =false;
    while (*str !='\0')
        {
         if ((*str == ch))
            {
                bFlag = true;
                break;
            }
            str++;
        }
 return bFlag;
}

int main()
{
    char Arr[100];
    bool bRet = false;
    char cValue;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character you want to search:\n");
    scanf(" c",&cValue);

    bRet = CheckOccurence(Arr,cValue);

    if (bRet== true)
    {
        printf(" character is present\n");
    }
    else 
    {
         printf(" character is not present\n");
    }
    return 0;
}