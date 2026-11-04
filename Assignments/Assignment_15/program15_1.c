/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:  -                                                                                                                                                  //
// Descrition:program which accept name from user and print that name                                                                                              //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    
    printf("Enter your full name\n");
    scanf("%[^'\n']s",Name);
    
    printf("your name is :%s\n",Name);
    
    return EXIT_SUCCESS;
}