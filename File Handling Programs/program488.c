#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fdRead =0 , fdWrite =0;
    char FileName[30];
    char Buffer[100] ={'\0'};
    int iRet = 0;

    printf("Enter the Existing File Name that you want to open : \n");
    scanf("%s",FileName);

    fdRead = open(FileName,O_RDWR);

    if(fdRead == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Enter the name of File you want to create :\n");
    scanf("%s",FileName);

    fdWrite = creat(FileName,0777);
    if(fdWrite == -1)
    {
        printf("Unable to create new file\n");
        return 0;
    }

    while( (iRet = read(fdRead,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdWrite, Buffer, iRet);
        memset(Buffer,0,sizeof(Buffer));
    }
  
    close(fdRead);
    close(fdWrite);


    return 0;
}