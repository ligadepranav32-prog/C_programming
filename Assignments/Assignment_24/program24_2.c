/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:CountChar                                                                                                                                          //
// Descrition:program which accept string from user and accept character.return frequency of that character                                                        //
//    /*                                                                                                                                                           //
//       1.input:-"Marvellous Multi OS"   2.input:-"Marvellous Multi OS"                                                                                           //        
//               e                                 W                                                                                                               //
//       output:-2                          output:-0                                                                                                              //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{ 
    int icount=0;
    while(*str!='\0')
    {
        if(*str == ch)
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
    char cvalue;
    int iret=0;

    printf("enter string\n");
    scanf("%19[^\n]",arr);

    printf("enter the character\n");
    scanf(" %c",&cvalue);

    iret=CountChar(arr,cvalue);

    printf("character frequency is %d",iret);

    return EXIT_SUCCESS;
}/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:CountWhite                                                                                                                                         //
// Descrition:program which accept string from user and accept character.return frequency of that character                                                        //
//    /*                                                                                                                                                           //
//       1.input:-"Marvellous mMulti OS"   2.input:-"Marvellous mMulti OS"                                                                                         //        
//               e                                 W                                                                                                               //
//       output:-2                          output:-0                                                                                                              //
//    */                                                                                                                                                           //
// Input:integer,characters                                                                                                                                        //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:09/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{ 
    int icount=0;
    while(*str!='\0')
    {
        if(*str == ch)
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
    char cvalue;
    int iret=0;

    printf("enter string\n");
    scanf("%19[^\n]",arr);

    printf("enter the character\n");
    scanf(" %c",&cvalue);

    iret=CountChar(arr,cvalue);

    printf("character frequency is %d",iret);

    return EXIT_SUCCESS;
}