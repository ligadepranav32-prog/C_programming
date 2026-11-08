/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=3 icol=5                                                                                                                                      //
//       output:-  5  4  3  2  1                                                                                                                                   //
//                 5  4  3  2  1                                                                                                                                   //
//                 5  4  3  2  1                                                                                                                                   //
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

void pattern(int irow,int icol)
{
    int icnti=0,icntj=0;

    for(icnti=1;icnti<=irow;icnti++) 
    {
        for(icntj=icol;icntj>=1;icntj--)
        {
           printf("%d\t",icntj);
            
        }
            printf("\n\n");
             
    }
}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("enter rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}