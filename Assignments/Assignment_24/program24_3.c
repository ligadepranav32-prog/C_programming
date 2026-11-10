/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:FirstChar                                                                                                                                          //
// Descrition:program which accept string from user and accept character.return index of first occurrence of that character.                                       //
//    /*                                                                                                                                                           //
//       1.input:-"Marvellous Multi OS"   2.input:-"Marvellous Multi OS"  2.input:-"Marvellous Multi OS"                                                           //        
//               M                                 W                             e                                                                                 //
//       output:0                          output:-1                          output:4                                                                             //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
    int icount = 0;
    

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return icount;
            
        }

        str++;
        icount++;
    }

    return EXIT_FAILURE;
}
int main()
{
    char arr[20];
    char cvalue;
    int iret=0;

    printf("enter string\n");
    scanf("%19[^\n]",arr);

    printf("enter the character\n");
    scanf(" %c",&cvalue);

    iret=FirstChar(arr,cvalue);

    printf("character location is:%d",iret);

    return EXIT_SUCCESS;
}