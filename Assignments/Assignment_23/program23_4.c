/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:DisplayDigits                                                                                                                                      //
// Descrition:program which accept string from user display number only digits from that string.                                                                   //
//    /*                                                                                                                                                           //
//       input:-"marve89llous121"                                                                                                                                  //
//       output:-89121                                                                                                                                             //
//    */                                                                                                                                                           //
// Input:integer,character                                                                                                                                         //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(char *str)
{ 
    while(*str!='\0')
    {
        if(*str>='0'&&*str<='9')
        {
            printf("%c",*str);
        }
        str++;        
    }
}
int main()
{
    char arr[20];

    printf("enter string\n");
    scanf("%19[^'\n']",arr);

    printf("Numbers from string are:\n");

    DisplayDigits(arr);


    return EXIT_SUCCESS;
}