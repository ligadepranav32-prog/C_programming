/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:MulDigits                                                                                                                                          //
// Descrition:program which accept number from user and return multiplication of all digits                                                                        //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int MulDigits(int ino)
{
    int idigits=0;
    int isum=1;

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigits=ino%10;
        isum=isum*idigits;
        ino=ino/10;

    }

    return isum;
}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=MulDigits(ivalue);

    printf("multiplication of digits is:%d",iret);

    return EXIT_SUCCESS;
}