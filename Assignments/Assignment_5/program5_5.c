/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:IdentifyCharacterType                                                          //
// Descrition:It use to perform identify character type                                        //
// Input:Character,Interger                                                                    // 
// Output:Interger,Character                                                                   //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkCharacterType(char cvalue)
{
    if (cvalue >= 'A' && cvalue <= 'Z')
    {
        printf("enter character is uppercase alphabet");
    }

    else if (cvalue >= 'a' && cvalue <= 'z')
    {
        printf("enter character is lowercase alphabet");
    }

    else if (cvalue >= '0' && cvalue <= '9')
    {
        printf("enter character is digit");
    }

    else
    {
        printf("enter character is special symbol");
    }
}
int main()
{
    char cvalue='\0';

    printf("enter character:\n");
    scanf("%c",&cvalue);

    checkCharacterType(cvalue);

    return EXIT_SUCCESS;
}