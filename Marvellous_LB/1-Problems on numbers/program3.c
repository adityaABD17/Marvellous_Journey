/////////////////////////////////////////////////////////////////////////////////////////////
//problem statement:Accept number from user and show it is divisible by 5 or not (BOOLEAN)
//
//*******Test Cases*********
//input:23
//Output:Number is not Divisible by 5
//
//input:55
//Output:Number is divisible by 5
//
/////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////
//steps to write a program
///////////////////////////////////////////////////////////

//Step1:    Understand the problem statement
//Step2:    Write The algorithm
//step3:    Decide the programming language
//Step4:    Write the program
//Step5:    Test the program(Cases & DryRun--Photo--)


/////////////////////////////////////////////////////////////
//Algorithm
///////////////////////////////////////////////////////////// 
/*
    START:
            Accept number from user as NO
            Divide that NO by 5 and check the value of reminder
            If::the value is 0---then display NO is divisible by 5
            Else:: display NO as is not divisible by 5
    END.
*/
//////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name:    DivisibleByFive
//Description:
//Input:
//Output:
//Author:
//Date:
////////////////////////////////////////////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
    int iAns= iNo % 5;
    if (iAns==0)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}

///////////////////////////////////////////////////////////////////////////////////
//Entry point of the application
//////////////////////////////////////////////////////////////////////////////////// 
int main()
{
    int ivalue=0;
    printf("Program to find the number is divisible by 5\n\n");

    printf("Enter Number to check:/n");
    scanf("%d",&ivalue);

    int iRet=DivisibleByFive(ivalue);

    if(iRet==0)
    {
        printf("%d is not divisible by 5",ivalue);
    }

    else
    {
        printf("%d is divisible by 5",ivalue);
    }
    return 0;
}

