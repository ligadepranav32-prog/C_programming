/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:LastChar                                                                                                                                         //
// Descrition:program which accept string from user and accept character.return index of last occurrence of that character.                                        //
//    /*                                                                                                                                                           //
//       1.input:-"Marvellous Multi OS"   2.input:-"Marvellous Multi OS"  2.input:-"Marvellous Multi OS"                                                           //        
//               M                                 W                             e                                                                                 //
//       output:11                          output:-1                          output:4                                                                            //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
    int icount = 0,iret=-1;
    

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iret=icount;
            
        }

        str++;
        icount++;
    }

    return iret;
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

    iret=LastChar(arr,cvalue);

    printf("character location is:%d",iret);

    return EXIT_SUCCESS;
}