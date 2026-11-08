/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-5                                                                                                                                                  //
//       output:- 5  #  4  #  3  #  2  #  1  #                                                                                                                     //
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
    
        for(icnt=ino;icnt>=1;icnt--)
        {          
            printf("%d \t #\t ",icnt);

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