/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:ChkDigit                                                                                                                                         //
// Descrition:program which accept character from user and check weather it is digit or not(0-9).                                                                  //
//    /*                                                                                                                                                           //
//       1.input:-7       2.input:-d                                                                                                                               //        
//       output:-true     output:-false                                                                                                                            //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:characters                                                                                                                                               //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:10/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{ 
    
    while(ch!='\0')
    {
        if(ch>='0'&&ch<='9')
        {
            return 1;
        }
        else
        {
            return 0;
        }
                
    }
   
}
int main()
{
    char cvalue='\0';
    BOOL bret=false;

    printf("enter the character\n");
    scanf(" %c",&cvalue);

    bret=ChkDigit(cvalue);

    if(bret==true)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }

    return EXIT_SUCCESS;
}