#include<stdio.h>

void ASCII()
{
    int i=0;

    char ch='\0';
    printf("______________________________________________________\n");
    printf("ASCII table\n");
     printf("\n______________________________________________________\n");
    printf("DECIMAL\tHEXADECIMAL\tOCTAL\n");

    for ( i = 0; i <=127; i++)
    {
        printf("%c\t%d\t%x\t%o\t",i,i,i,i);
    }
    
}

int main()
{
    ASCII();
    return 0;
}