/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:AcceptCharaterAndConvetCaseOfCharacter                                         //
// Descrition:It use to perform Accept charater and convert case of character           //
// Input:Character,Character                                                                   // 
// Output:Character                                                                            //
// Author:Pranav shankar ligade                                                                //
// date:22/10/2026                                                                             //
//                                                                                             //
////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void DisplayConvert(char cvalue)
{
    if(cvalue>='a'&& cvalue<='z')
    {
        printf("%c",cvalue-32);
    }
    else
    {
        printf("%c",cvalue+32);
    }
}
int main()
{
    char cvalue='\0';
    printf("enter character\n");
    scanf("%c",&cvalue);
    
    DisplayConvert(cvalue);

    return EXIT_SUCCESS;
}
