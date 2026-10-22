////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    // 
// Funtion Name:AcceptNumberTo PrintNumberOf*OnScreen                                 //
// Descrition:It use to perform accept one number to print that number of * on screen //
// Input:Integer,Integer                                                              // 
// Output:Integer                                                                     //
// Author:Pranav shankar ligade                                                       //
// Date:22/10/2026                                                                    //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Accept(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int ivalue=0;
    ivalue=5;

    Accept(ivalue);
    return EXIT_SUCCESS;
}