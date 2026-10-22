/////////////////////////////////////////////////////////////////////////////////
//                                                                             // 
// Funtion Name:AcceptNumerCheckWheatherNumberIsEvenOrOdd                      //
// Descrition:It use to perform accept numer and check number is even or odd   //
// Input:Integer,Boolean                                                      // 
// Output:Integer                                                              //
// Author:Pranav shankar ligade                                                //
// Date:22/10/2026                                                             //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL checkEven(int ino)
{
    if(ino%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ivalue=0;
    BOOL bret=FALSE;

    printf("enter number:\n" );
    scanf("%d",&ivalue);
    
    bret=checkEven(ivalue);

    if(bret==TRUE)
    {
        printf("given number is even\n");
    }
    
    else
    {
        printf("given number is odd\n");
    }


    
    return EXIT_SUCCESS;
}
