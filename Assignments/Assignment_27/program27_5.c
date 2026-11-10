/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                     //
// Funtion Name:Reverse                                                                                                                                                                //
// Descrition:program which accept string from user and display it in reverse order.                                                                                                   //
//            input:MarvellouS                                                                                                                                                                  //
//            output:SuollevraM                                                                                                                            //
// Input:integer,characters                                                                                                                                                            //
// Output:characters                                                                                                                                                                   //
// Author:Pranav shankar ligade                                                                                                                                                        //
// Date:10/11/2026                                                                                                                                                                     //
//                                                                                                                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int icount=0;

    while(str[icount] != '\0')
    {
        icount++;
    }

    for(icount = icount-1; icount >= 0; icount--)
    {
        printf("%c",str[icount]);
    }
}
int main()
{
    char arr[20];

    printf("enter string\n");
    scanf("%19[^'\n']",&arr);
    
    Reverse(arr);

    return EXIT_SUCCESS;
}