/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:LastChar                                                                                                                                           //
// Descrition:program which accept string from user reverse that string in place.                                                                                  //
//    /*                                                                                                                                                           //
//       input:-"abcd"   2.input:-"abba"                                                                                                                           //        
//       output:"dcba"     output:"abba"                                                                                                                           //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
   char *start=str;
   char *end=str;
   char temp;
    

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char arr[20];

    printf("enter string\n");
    scanf("%19[^\n]",arr);

    StrRevX(arr);

    printf("modified string is:%s",arr);

    return EXIT_SUCCESS;
}