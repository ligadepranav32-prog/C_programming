/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=4 icol=5                                                                                                                                      //
//       output:- 4  4  4  4  4                                                                                                                                    //
//                3  3  3  3  3                                                                                                                                    //
//                2  2  2  2  2                                                                                                                                    //
//                1  1  1  1  1                                                                                                                                    //
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

    for(icnti=irow;icnti>0;icnti--)
    {
        for(icntj=icol;icntj>0;icntj--)
        {
            printf("%d \t",icnti);
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