/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Display                                                                        //
// Descrition:Accept N from user and print all odd number up to N                              //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void OddDisplay(int ino)
{
    int icnt=0;

    for(icnt=1;icnt<=ino;icnt++)
    {
        if(icnt%2!=0) //to display odd 
        {
            printf("%d ",icnt);
        }
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    OddDisplay(ivalue);

    return EXIT_SUCCESS;
}