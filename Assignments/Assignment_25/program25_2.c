/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:ChkCapital                                                                                                                                         //
// Descrition:program which accept character from user and check weather it is capital or not(A-Z).                                                                //
//    /*                                                                                                                                                           //
//       1.input:-F       2.input:-d                                                                                                                               //        
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

BOOL ChkCapital(char ch)
{ 
    
    while(ch!='\0')
    {
        if(ch>='A'&&ch<='Z')
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

    bret=ChkCapital(cvalue);

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