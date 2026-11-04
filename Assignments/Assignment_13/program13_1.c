/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:CountEven                                                                                                                                          //
// Descrition:program which accept number from user and return the count of even number digits                                                                     //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountEven(int ino)
{
    int idigits=0;
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigits=ino%10;
        if(idigits%2==0)
        {
            icnt++;
        }
        ino=ino/10;
        
    }

    return icnt;
    
}

int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=CountEven(ivalue);

    printf("even numbers is: %d",iret);

    return EXIT_SUCCESS;
}