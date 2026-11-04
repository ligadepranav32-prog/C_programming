/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:CountRange                                                                                                                                         //
// Descrition:program which accept number from user and return the count of digits in between 3 and 7                                                              //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountRange(int ino)
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
        if((idigits>3) && (idigits<7))
        {
            icnt++;
        }
        ino=ino/10;
    }

    return icnt++;

}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=CountRange(ivalue);

    printf("count is:%d",iret);

    return EXIT_SUCCESS;
}