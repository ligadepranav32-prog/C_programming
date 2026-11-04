/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:MultFact                                                                                                                                           //
// Descrition:program which accept number from user and display its multiplication of factors                                                                      //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int MultFact(int ino)
{
    int icnt=0;
    int isum=1;

    for(icnt=1;icnt<ino;icnt++)
    {
        if(ino%icnt==0)
        {
            isum=isum*icnt;
        }
    }

    return isum;

}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=MultFact(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;

}