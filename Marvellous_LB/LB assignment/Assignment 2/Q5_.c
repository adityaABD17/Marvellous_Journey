#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
    if(iNo%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iVal=0;

    printf("Enter Number to check:\n");
    scanf("%d",&iVal);

   int iRet= Display(iVal);

   if(iRet==false){
    printf("%d is a odd number\n",iVal);
   }
   else{
    printf("%d is a even number\n",iVal);
   }

    return 0;
}