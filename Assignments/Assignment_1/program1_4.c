/////////////////////////////////////////////////////////////////////
//                                                                 // 
// Funtion Name:CheckWeatherNumerIsDivisibleByfiveOrNot            //
// Descrition:It use to perform given number is divide by 5 or not //
// Input:Integer,Boolean                                           // 
// Output:Integer                                                  //
// Author:Pranav shankar ligade                                    //
// Date:22/10/2026                                                 //
//                                                                 //
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


typedef int bool;
#define TRUE 1
#define FALSE 0

bool check(int ino)
{
    if((ino%5)==0)
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
    bool bret=FALSE;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    bret=check(ivalue);

    if(bret==TRUE)
    {
        printf("divisible by 5\n");
    }
    else
    {
        printf("not divisible by 5\n");
    }

    return EXIT_SUCCESS;
}