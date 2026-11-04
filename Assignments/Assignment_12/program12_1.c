/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:DisplayDigits                                                                                                                                      //
// Descrition:program which accept number from user and dislpay its digits in reverse order                                                                        //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:02/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int ino)
{
    int idigit=0;
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigit=ino%10;
        printf("%d\n",idigit);
        ino=ino/10;
    }
    
}
int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    DisplayDigit(ivalue);

    return EXIT_SUCCESS;
}

