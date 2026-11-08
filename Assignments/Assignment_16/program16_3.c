/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=3 icol=5                                                                                                                                      //
//       output:- A  A  A  A  A                                                                                                                                    //
//                B  B  B  B  B                                                                                                                                    //
//                C  C  C  C  C                                                                                                                                    //
//                                                                                                                                                                 //
//    */                                                                                                                                                           //
// Input:integer,character                                                                                                                                         //
// Output:character                                                                                                                                                //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:07/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int irow,int icol)
{
    int icnti=0,icntj=0;
    char ch='\0';
    
    for(icnti=1,ch='A';icnti<=irow;icnti++,ch++)
    {
        for(icntj=1;icntj<=icol;icntj++)
        {
            printf("%c \t",ch);
        } 

        printf("\n\n");
    }
   
}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("enter numbers for rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}