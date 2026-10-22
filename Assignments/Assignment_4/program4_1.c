/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckWhetherNumberIsPositiveOrNegative                                         //
// Descrition:It use to perform check whether number is positive or negative                   //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkNumber(int ino)
{
    
    if(ino>0)
    {
        printf("it is positive number\n");
    }

    else if(ino<0)
    {
        printf("it is negative number\n");
    }

    else
    {
        printf("it is zero");
    }
}
int main()
{
    int ivalue=0;

    printf("enter a number:\n");
    scanf("%d",&ivalue);

    checkNumber(ivalue);

    return EXIT_SUCCESS;
}