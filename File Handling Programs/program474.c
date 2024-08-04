#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0;
    char FileName[30];
    
    printf("Enter the File Name that you want to create : \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);


    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully with fd%d\n",fd);
    }
    
    close(fd);

    return 0;
}