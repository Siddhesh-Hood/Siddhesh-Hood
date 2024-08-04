#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd =0;
    char FileName[30];
    char Buffer[100] ={'\0'};
    int iRet = 0;

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
        printf("%s", Buffer);
        memset(Buffer,0,sizeof(Buffer));
    }
  
    close(fd);

    return 0;
}

//Total size : 672 Bytes
// 1 : 100     572
// 2 : 100     472
// 3 : 100     372
// 4 : 100     272
// 5 : 100     172
// 6 : 100     72
// 7 : 72      0
// 8 : 0