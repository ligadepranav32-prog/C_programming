/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckEvenOrOddNumber                                                           //
// Descrition:It use to perform check even or odd Number                                       //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkEvenOdd(int ino)
{
    if(ino%2==0)
    {
        printf("it is even number\n");
    }

    else
    {
        printf("it is odd number");
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    checkEvenOdd(ivalue);

    return EXIT_SUCCESS;
}