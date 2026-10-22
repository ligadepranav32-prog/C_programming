/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheclkDivisibilityByThreeAndFive                                               //
// Descrition:It use to perform checlk divisibility by 3 and 5                                 //
// Input:Interger,Interger                                                                     // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkMultipleDivisibility(int ivalue)
{
    if(ivalue%5==0&&ivalue%3==0)
    {
        printf("enter value is divisible by both");
    }

    else if(ivalue%3==0)
    {
        printf("enter value is divisible by only 3");
    }

    else if(ivalue%5==0)
    {
        printf("enter value is divisible by only 5");
    }

    else
    {
        printf("enter value is not divisible by either");
    }
}
int main()
{
    int ivalue=0;

    printf("enter value:\n");
    scanf("%d",&ivalue);

    checkMultipleDivisibility(ivalue);

    return EXIT_SUCCESS;
}