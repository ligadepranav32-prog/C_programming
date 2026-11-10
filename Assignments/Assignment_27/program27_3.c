///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                                                               //
// Funtion Name:CountSmall                                                                                                                                                                                                       //
// Descrition:program which accept string from user and return difference between frequency of small characters and frequency of capital characters.                                                                             //
//    /*                                                                                                                                                                                                                         //
//       1.input:-Marvellous                                                                                                                                                                                                     //        
//       output:-6 (8-2)                                                                                                                                                                                                         //
//    */                                                                                                                                                                                                                         //
// Input:integer,characters                                                                                                                                                                                                      //
// Output:integer                                                                                                                                                                                                                //
// Author:Pranav shankar ligade                                                                                                                                                                                                  //
// Date:10/11/2026                                                                                                                                                                                                               //
//                                                                                                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{

    int iSmall = 0;
    int iCapital = 0;  

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);

   
}
int main()
{
    char arr[20];
    int iret=0;
    
    printf("enter string:\n");
    scanf(" %19[^\n]",arr);
    
    iret=Difference(arr);

    printf("%d",iret);

    return EXIT_SUCCESS;
}