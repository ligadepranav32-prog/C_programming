/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:AcceptCharaterAndCheckWhetherThatCharacterIsvowelOrNot                         //
// Descrition:It use to perform accept charater and check Character is vowel(a,e,i,o,u) or not //
// Input:Character,Character                                                                   // 
// Output:Character                                                                            //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL checkVowel(char cvalue)
{
    if(cvalue=='a'||cvalue=='e'||cvalue=='i'||cvalue=='o'||cvalue=='u'||cvalue=='A'||cvalue=='E'||cvalue=='I'||cvalue=='O'||cvalue=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cvalue=0;
    BOOL bret=FALSE;

    printf("enter character:\n" );
    scanf("%c",&cvalue);
    
    bret=checkVowel(cvalue);

    if(bret==TRUE)
    {
        printf("it is vowel\n");
    }
    
    else
    {
        printf("it is not vowel\n");
    }


    
    return EXIT_SUCCESS;
}
