/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Table                                                                          //
// Descrition:program which accept number from user and display table                          //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Table(int ino)
{
    int icnt=0;
    
    for(icnt=1;icnt<=10;icnt++)
    {
        printf("%d ",ino*icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    Table(ivalue);

    return EXIT_SUCCESS;
}