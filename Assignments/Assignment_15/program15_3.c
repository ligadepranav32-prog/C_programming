/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:ChkEqual                                                                                                                                           //
// Descrition:program which accept two number from user and check wheather number are equal or not                                                                 //
// Input:integer,boolean                                                                                                                                           // 
// Output:boolean                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define true 1
#define false 0

BOOL chkEqual(int ino1,int ino2)
{
    if(ino1==ino2)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    int ivalue1=0,ivalue2=0;
    BOOL bret=false;

    printf("enter first number:\n");
    scanf("%d",&ivalue1);

    printf("enter second number:\n");
    scanf("%d",&ivalue2);

    bret=chkEqual(ivalue1,ivalue2);

    if(bret==true)
    {
        printf("Numbers Are Equal\n");
    }
    else
    {
        printf("Numbers Are Not Equal\n");
    }

    return EXIT_SUCCESS;
}