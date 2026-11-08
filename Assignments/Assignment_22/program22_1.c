/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-5                                                                                                                                                  //
//       output:- A  B  C  D  E                                                                                                                                    //
//                                                                                                                                                                 //
//                                                                                                                                                                 //
//                                                                                                                                                                 //
//                                                                                                                                                                 //
//                                                                                                                                                                 //
//                                                                                                                                                                 //
//    */                                                                                                                                                           //
// Input:integer,integer                                                                                                                                           //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:08/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt=0;
    char ch='\0';

        for(icnt=1,ch='A';icnt<=ino;icnt++,ch++)
        {          
            printf("%c \t",ch);

        }
            printf("\n\n");
             
    
}
int main()
{
    int ivalue=0;

    printf("enter numbers\n");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return EXIT_SUCCESS;
}