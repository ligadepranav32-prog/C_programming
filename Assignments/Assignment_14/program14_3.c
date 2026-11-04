/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:NonFact                                                                                                                                            //
// Descrition:program which accept number from user and display all its non factors                                                                                //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void NonFact(int ino)
{
    int icnt=0;
   

    for(icnt=1;icnt<=ino;icnt++)
    {
        if(ino % icnt !=0)
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

    NonFact(ivalue);

    return EXIT_SUCCESS;
}