/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:chkZero                                                                                                                                            //
// Descrition:program which accept number from user and check weather it contains 0 in it or not.                                                                  //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:02/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;
BOOL chkZero(int ino)
{
    int idigit=0;
    
    if(ino == 0)
    {
        return true;
    }

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigit=ino%10;
        if(idigit==0)
        {
            return true;
        }
        ino=ino/10;
    }

        return false;
}

int main()
{
    int ivalue=0;
    BOOL bret=false;

    printf("enter number\n");
    scanf("%d",&ivalue);

    bret=chkZero(ivalue);

    if(bret==true)
    {
        printf("it contain zero\n");;
    }

    else
    {
        printf("there is no zero\n");
    }

    return EXIT_SUCCESS;
}