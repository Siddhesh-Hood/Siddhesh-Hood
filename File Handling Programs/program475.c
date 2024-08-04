#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0;
    char FileName[30];
    
    printf("Enter the File Name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);


    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File opend successfully with fd %d\n",fd);
    }

    return 0;
}

/*
O_RDONLY      READ MODE
O WRONLY      WRITE MODE
O_RDWR        READ + WRITE MODE
O_CREATE      CREATE MODE
O APPEND      APPEND MODE

*/