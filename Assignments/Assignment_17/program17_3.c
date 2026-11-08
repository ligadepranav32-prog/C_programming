/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 //
// Funtion Name:pattern                                                                                                                                            //
// Descrition:program which accept number of row and columns from user and display below pattern:-                                                                 //
//    /*                                                                                                                                                           //
//       input:-irow=5 icol=5                                                                                                                                      //
//       output:-a  b  c  d  e                                                                                                                                     //
//               1  2  3  4  5                                                                                                                                     //
//               a  b  c  d  e                                                                                                                                     //
//               1  2  3  4  5                                                                                                                                     //
//    */                                                                                                                                                           //
// Input:integer,character                                                                                                                                           //
// Output:integer,character                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:08/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int irow,int icol)
{
    int icnti=0,icntj=0;
    char ch='\0';

    for(icnti=1,ch='a';icnti<=irow;icnti++,ch++)
    {
        for(icntj=1;icntj<=irow;icntj++)
        {
            if((icnti%2)!=0)
            {
                printf("%c \t",'a'+icntj-1);  //way to generates alphabatic characters without writing a,b,c,d,e separately
                
            }
            else
            {
                printf("%d \t",icntj);
            }
        }

        printf("\n\n");
    }
}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("enter rows and columns");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;

}