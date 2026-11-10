/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:strlwrx                                                                                                                                            //
// Descrition:program which accept string from user and convert it into upper case.                                                                                //
//    /*                                                                                                                                                           //
//       input:-"Marvellous Multi OS"                                                                                                                              //
//       output:-"MARVELLOUS MULTI OS"                                                                                                                             //
//    */                                                                                                                                                           //
// Input:integer,integer                                                                                                                                           //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{ 
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            *str=*str-32;  //(a=97)-(A=65)=32
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("modifies string is:\n%s",arr);

    return EXIT_SUCCESS;
}