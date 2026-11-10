///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                                                               //
// Funtion Name:ChkVowel                                                                                                                                                                                                         //
// Descrition:program which accept string from user and check whether it contains vowels in it or not.                                                                                                                           //
//    /*                                                                                                                                                                                                                         //
//       1.input:-Marvellous    2.input:xyz                                                                                                                                                                                      //        
//         output:true            output:false                                                                                                                                                                                   //                                                                                                                                                                                              
//    */                                                                                                                                                                                                                         //
// Input:integer,characters                                                                                                                                                                                                      //
// Output:characters                                                                                                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                                                                                                                  //
// Date:10/11/2026                                                                                                                                                                                                               //
//                                                                                                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

int ChkVowel(char *str)
{
  

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' ||
           *str == 'i' || *str == 'o' ||
           *str == 'u' || *str == 'A' ||
           *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return 1;
        }
       

        str++;
    }

    return 0;

   
}
int main()
{
    char arr[20];
    BOOL bret=false;
    
    printf("enter string:\n");
    scanf(" %19[^\n]",arr);
    
    bret=ChkVowel(arr);

    if(bret == true)
    {
        printf("String contains vowels\n");
    }
    else
    {
        printf("String does not contain vowels\n");
    }

    return EXIT_SUCCESS;
}