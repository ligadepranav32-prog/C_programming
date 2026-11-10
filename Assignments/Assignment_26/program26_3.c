///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                                                               //
// Funtion Name:Display                                                                                                                                                                                                          //
// Descrition:accept character from user,if it is capital then display charactor from input characters till z.if input character is mall then it print all the charactyer in reverse order till a.in other cases return directly.//
//    /*                                                                                                                                                                                                                         //
//       1.input:-Q                          2.input:-m                             3.input:8                                                                                                                                    //        
//       output:-Q R S T U V W X Y Z           output:-m i k j i h g f e d c b a      output:                                                                                                                                    //
//    */                                                                                                                                                                                                                         //
// Input:integer,characters                                                                                                                                                                                                      //
// Output:characters                                                                                                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                                                                                                                  //
// Date:10/11/2026                                                                                                                                                                                                               //
//                                                                                                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    char icount='\0';

    if(ch>='A'&&ch<='Z')
    {
        for(icount=ch;icount<='Z';icount++)
        {
            printf("%c\t",icount);
        }
    }
    else if(ch>='a'&&ch<='z')
    {
        for(icount=ch;icount>='a';icount--)
        {
            printf("%c\t",icount);
        }
    }
    else
    {
        return;
    }

   
}
int main()
{
    char cvalue=0;
    
    printf("enter the character:\n");
    scanf("%c",&cvalue);
    
    Display(cvalue);

    return EXIT_SUCCESS;
}