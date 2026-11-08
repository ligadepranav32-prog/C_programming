/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=5 icol=5                                                                                                                                      //
//       output:-  *  *  *  *                                                                                                                                      //
//                 *  *  *  #                                                                                                                                      //
//                 *  *  #  #                                                                                                                                      //
//                 *  #  #  #                                                                                                                                      //
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
        for(icntj=1;icntj<=icol;icntj++)
        {
            if(icnti+icntj>=6) //position:(2+4=6),(3+3=6,3+4=7),(4+2=6,4+3=7,4+4=8)
            {
                printf("#\t");
            }
            else   
            {
                printf("*\t");
            }
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