/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Display                                                                        //
// Descrition:Accept N from user and print first 5 multiples of N                              //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void MultipleDisplay(int ino)
{
    int icnt=0;

    for(icnt=1;icnt<=5;icnt++)
    {
        printf("%d ",ino*icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);

    return EXIT_SUCCESS;
}