/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckDivisibilityByFive                                                        //
// Descrition:It use to perform check divisibility by 5                                        //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkDivisibility(int ivalue)
{
    if(ivalue%5==0)
    {
        printf("enter value is divisible by 5");
    }

    else
    {
        printf("enter value is not divisible by 5");
    }
}
int main()
{
    int ivalue=0;

    printf("enter value:\n");
    scanf("%d",&ivalue);

    checkDivisibility(ivalue);

    return EXIT_SUCCESS;
}