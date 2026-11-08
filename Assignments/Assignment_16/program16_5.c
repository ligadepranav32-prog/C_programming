/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=3 icol=4                                                                                                                                      //
//       output:- 1  2  3  4                                                                                                                                       //
//                5  7  7  8                                                                                                                                       //
//                9  10 11 12                                                                                                                                      //
//                                                                                                                                                                 //
//                                                                                                                                                                 //
//    */                                                                                                                                                           //
// Input:integer,integer                                                                                                                                           //
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:07/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int irow,int icol)
{
    int icnti=0,icntj=0;
    int ino=1;
     
    for(icnti=1;icnti<=irow;icnti++)
    {
        
        for(icntj=1;icntj<=icol;icntj++)
        {
           printf("%d \t",ino);
           ino++;
        }

        printf("\n\n");
    }

    
}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("enter number of rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);


    return EXIT_SUCCESS;
}