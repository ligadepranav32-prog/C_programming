///////////////////////////////////////////////////////////////////////////
//                                                                       // 
// Funtion Name:AcceptNumerPrintNumberof*OnScreen                        //
// Descrition:It use to perform accept numer print number of * on screen //
// Input:Integer,Integer                                                 // 
// Output:Integer                                                        //
// Author:Pranav shankar ligade                                          //
// Date:22/10/2026                                                       //
//                                                                       //
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
    int icnt=0;
    icnt=1;
    while(icnt<=ino)
    {
        printf("*\n");
        icnt++;
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);
    display(ivalue);

    return EXIT_SUCCESS;
}