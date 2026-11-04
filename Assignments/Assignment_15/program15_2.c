/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:ChkGreater                                                                                                                                         //
// Descrition:program which accept one number from user and check whether that number is greater than 100 or not                                                   //
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

BOOL ChkGreater(int ino)
{
    if(ino>100)
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
    int ivalue=0;
    BOOL bret=false;

    printf("enter number\n");\
    scanf("%d",&ivalue);

    bret=ChkGreater(ivalue);

    if(bret==true)
    {
        printf("Number is Greater");
    }

    else
    {
        printf("Number is Smaller");
    }


    return EXIT_SUCCESS;
}