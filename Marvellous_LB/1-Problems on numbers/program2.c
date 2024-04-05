#include<stdio.h>

int Addition(int ival1,int ival2)
{
    int ians=ival1+ival2;
    return ians;
}

int Division(int ival1, int ival2)
{
    int ians=ival1/ival2;
    return ians;
}

int subtraction(int ival1,int ival2)
{
    int ians=ival1-ival2;
    return ians;
    
}

int multiplication(int ival1,int ival2)
{
    int ians= ival1*ival2;
    return ians;
}



int main()
{
    int iNo1=0, iNo2=0;
    printf("Enter first number:\n");
    scanf("%d",&iNo1);
    printf("Enter Seccond number:\n");
    scanf("%d",&iNo2);

    printf("First Number is:\t%d\n",iNo1);
    printf("Second Number is:\t%d\n",iNo2);

    int ians1=Addition(iNo1,iNo2);
    int ians2=Division(iNo1,iNo2);
    int ians3=subtraction(iNo1,iNo2);
    int ians4=multiplication(iNo1,iNo2);

    printf("Addition of numbers is:\t%d\n",ians1);
    printf("Division of numbers is:\t%d\n",ians2);
    printf("Subtraction of numbers is:\t%d\n",ians3);
    printf("Multiplication of numbers is:\t%d\n",ians4);
    return 0;
}
