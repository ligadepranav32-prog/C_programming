/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:ChkAlpha                                                                                                                                        //
// Descrition:program which accept character from user and check weather it is alphabet or not(A-Za-z).                                                            //
//    /*                                                                                                                                                           //
//       1.input:-f       2.input:-&                                                                                                                               //        
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

BOOL ChkAlpha(char ch)
{ 
    
    while(ch!='\0')
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
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

    bret=ChkAlpha(cvalue);

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