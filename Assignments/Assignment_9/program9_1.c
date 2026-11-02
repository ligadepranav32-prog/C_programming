/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Display                                                                        //
// Descrition:program which accept number from user and display below pattern                  //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int ino)
{
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

    for(icnt=0;icnt<=ino;icnt++)
    {
        printf("*\t");
        
    }

     for(icnt=0;icnt<=ino;icnt++)
    {
        printf("#\t");
        
    }


}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}