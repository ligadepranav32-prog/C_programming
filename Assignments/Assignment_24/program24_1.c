/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:CountWhite                                                                                                                                         //
// Descrition:program which accept string from user and accept one character.check whether that character is present in string or not.                             //
//    /*                                                                                                                                                           //
//       1.input:-"Marvellous Multi OS"   2.input:-"Marvellous Multi OS"                                                                                           //        
//               e                                 W                                                                                                               //
//       output:-true                       output:-false                                                                                                          //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:characters                                                                                                                                              //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{ 
    int icount=0;
    while(*str!='\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        str++;        
    }
    return 0;
}
int main()
{
    char arr[20];
    char cvalue;
    BOOL bret=false;

    printf("enter string\n");
    scanf("%19[^'\n']",arr);

    printf("enter the character\n");
    scanf(" %c",&cvalue);

    bret=ChkChar(arr,cvalue);

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