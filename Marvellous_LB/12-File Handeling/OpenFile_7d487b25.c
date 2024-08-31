#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int OpenFile(char Name[])
{
    int fd=0;
    // fd=open(Name,O_RDWR);
    fd=open(Name,O_RDWR | O_APPEND);
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
        
    printf("Enter the content you want to enter in the file :\n");
    scanf(" %[^\n]s",Data);
    
    Length=strlen(Data);

// write(from_where,what,how_much)
    write(fd,Data,Length);
    
    return 0;
}