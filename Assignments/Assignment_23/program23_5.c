/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:CountWhite                                                                                                                                         //
// Descrition:program which accept string from user and count number of white spaces.                                                                              //
//    /*                                                                                                                                                           //
//       input:-"marve89llous121 os"                                                                                                                               //
//       output:-1                                                                                                                                                 //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{ 
    int icount=0;
    while(*str!='\0')
    {
        if(*str == ' ')
        {
            icount++;
        }
        str++;        
    }
    return icount;
}
int main()
{
    char arr[20];
    int iret=0;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    iret=CountWhite(arr);

    printf("%d\n",iret);


    return EXIT_SUCCESS;
}