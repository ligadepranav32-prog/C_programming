/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=4 icol=4                                                                                                                                      //
//       output:- A  B  C  D                                                                                                                                       //
//                a  b  c  d                                                                                                                                       //
//                A  B  C  D                                                                                                                                       //
//                a  b  c  d                                                                                                                                       //
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
    int icnti,icntj=0;
    char ch='\0';

   
        for(icnti=1;icnti<=irow;icnti++)
        {
            if(icnti % 2==0)
            {
                ch='a';
            }
            else
            {
                ch='A';
            }
            for(icntj=1;icntj<=icol;icntj++,ch++)
            {
            
                printf("%c\t",ch);

                
            }
            printf("\n\n");
    }

        
  
}
int main()
{
    int ivalue1,ivalue2=0;

    printf("enter number of rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}