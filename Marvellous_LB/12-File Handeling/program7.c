#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

// O_RDONLY     ReadOnly
// O_WRONLY     WriteOnly
// O_RDWR       Read_WriteBoth

int OpenFile(char Name[])
{
    int fd=0;
    // fd=open(Name,O_RDWR);
    fd=open(Name,O_RDWR);
    return fd;
}

int main()
{
    char Fname[20];
    int fd=0,Length=0;
    char Data[100];

    printf("Enter name of the file you want to write :\n");
    scanf("%s",Fname);

    fd=OpenFile(Fname);

    if(fd==-1)
    {
        return -1;
    }
    
    // read(kuthun,kashat,kiti)
    read(fd,Data,13);

    printf("Data from file is %s",Data);
    
    return 0;
}