/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Display                                                                        //
// Descrition:Accept number from user and print its numbers line                               //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
    int icnt=0;
    for(icnt=-ino;icnt<=ino;icnt++)   //icnt=-ino:start from -4
    {
        printf("%d ",icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    display(ivalue);
    return EXIT_SUCCESS;
}