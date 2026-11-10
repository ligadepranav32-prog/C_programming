///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                                                               //
// Funtion Name:CountCapital                                                                                                                                                                                                     //
// Descrition:program which accept string from user and count number of capital charaters                                                                                                                                        //
//    /*                                                                                                                                                                                                                         //
//       1.input:-Marvellous Multi OS                                                                                                                                                                                            //        
//       output:-4                                                                                                                                                                                                               //
//    */                                                                                                                                                                                                                         //
// Input:integer,characters                                                                                                                                                                                                      //
// Output:integer                                                                                                                                                                                                                //
// Author:Pranav shankar ligade                                                                                                                                                                                                  //
// Date:10/11/2026                                                                                                                                                                                                               //
//                                                                                                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{

    int icount=0;  

    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
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
    
    iret=CountCapital(arr);

    printf("%d",iret);

    return EXIT_SUCCESS;
}