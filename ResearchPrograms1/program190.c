
#include<stdio.h>
#include<stdbool.h>

int Display(char *str)
{   
    int iCnt = 0;
    
    for(iCnt =0; str[iCnt] !='\0'; iCnt++)
{       
    printf("%c\n", str[iCnt]);
}

}
int main()
{
    char Arr[100];
    

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    

    Display(Arr);

  
    return 0;
}
