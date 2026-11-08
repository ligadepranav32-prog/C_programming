/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-8                                                                                                                                                  //
//       output:- 2  4  6  8  10  12  14  16                                                                                                                       //
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
    
        for(icnt=1;icnt<=ino;icnt++)
        {          
            printf("%d\t",icnt*2);

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