///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                                                               //
// Funtion Name:CountSmall                                                                                                                                                                                                       //
// Descrition:program which accept string from user and count number of small charaters                                                                                                                                          //
//    /*                                                                                                                                                                                                                         //
//       1.input:-Marvellous                                                                                                                                                                                                     //        
//       output:-9                                                                                                                                                                                                               //
//    */                                                                                                                                                                                                                         //
// Input:integer,characters                                                                                                                                                                                                      //
// Output:integer                                                                                                                                                                                                                //
// Author:Pranav shankar ligade                                                                                                                                                                                                  //
// Date:10/11/2026                                                                                                                                                                                                               //
//                                                                                                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{

    int icount=0;  

    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
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
    
    printf("enter string:\n");
    scanf(" %19[^\n]",arr);
    
    iret=CountSmall(arr);

    printf("%d",iret);

    return EXIT_SUCCESS;
}