#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0;
    char FileName[30];
    char Buffer [100] = {'\0'};
    int iRet =0, iCount =0,i;
    
    printf("Enter the File Name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);


    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
    
    while( (iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i =0;i< iRet; i++)
        {
            if(Buffer[i] == 'a' || Buffer[i] == 'e' ||Buffer[i] == 'i' || Buffer[i] == 'o' || Buffer[i] == 'u')
            {
                iCount++;
            }
        }
    } 

    printf("Number of Vowels are : %d\n", iCount);

    close(fd);

    return 0;
}
