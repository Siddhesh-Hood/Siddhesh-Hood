#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd =0;
    char FileName[30];
    char Arr[100];
    int iRet = 0;
    
    printf("Enter the File Name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
   
    printf("Enter the data that you want to write:\n");
    scanf(" %[^'\n']",Arr);

    iRet= write(fd,Arr,strlen(Arr));
    
    printf("Number of Bytes written into the file are: %d\n", iRet);

    close(fd);

    return 0;
}