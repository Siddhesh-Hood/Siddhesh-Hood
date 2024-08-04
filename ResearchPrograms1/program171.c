#include<stdio.h>
#include<string.h>

int CountVowel(char *str)
{   
    int iCnt =0;
    while (*str !='\0')
{
         if ( (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') )
            {
                iCnt++;
            }
            str++;
}
    return iCnt++;

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowel(Arr);

    printf("Number of Vowel lettres are :%d\n", iRet);
    return 0;
}