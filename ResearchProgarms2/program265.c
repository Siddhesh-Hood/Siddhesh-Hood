#include<stdio.h>

void strlwrX(char *str)
{
    while(*str !='\0')
    {
        if((*str >= 'A') && (*str <='Z'))
        {
            (*str) = (*str) + 32;
        }
        str++;
    }

}
int main()
{

    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^'\n']c", Arr);

    strlwrX(Arr);

    printf("Updated String is : %s\n", Arr);

    return 0;
}