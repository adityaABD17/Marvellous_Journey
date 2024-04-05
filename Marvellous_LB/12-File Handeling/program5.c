#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// 

int OpenFile(char Name[])
{
    int fd=0;
    fd=open(Name,O_RDWR);
    return fd;
}

int main()
{
    char Fname[20];
    int fd=0;
    char Data[]="Marvellous";
    printf("Enter name of the file you want to write :\n");
    scanf("%s",Fname);

    fd=OpenFile(Fname);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }   write(fd,Data,10);

    return 0;
}