/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:FactRev                                                                                                                                           //
// Descrition:program which accept number from user and display its factors in decreasing order                                                                    //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FactRev(int ino)
{
    int icnt=0;
    
    for(icnt=ino/2;icnt>=1;icnt--)
    {
        if(ino % icnt ==0)
        {
        printf("%d\t",icnt);
        }
    }
}
int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    FactRev(ivalue);

    return EXIT_SUCCESS;
}